from gtts import gTTS
import requests
import os
import time

# إنشاء فولدر رئيسي
base_folder = "Quran_Audio"
if not os.path.exists(base_folder):
    os.makedirs(base_folder)

print("Downloading Quran and generating audio...")

# عدد السور
for surah in range(1, 115):
    
    print(f"Processing Surah {surah}...")
    
    # API للقرآن
    url = f"https://api.alquran.cloud/v1/surah/{surah}/ar"
    response = requests.get(url)
    data = response.json()
    
    surah_name = data['data']['name']
    
    # فولدر لكل سورة
    surah_folder = f"{base_folder}/{surah}_{surah_name}"
    if not os.path.exists(surah_folder):
        os.makedirs(surah_folder)
    
    ayahs = data['data']['ayahs']
    
    for ayah in ayahs:
        ayah_num = ayah['numberInSurah']
        text = ayah['text']
        
        try:
            # تحويل لصوت
            tts = gTTS(text=text, lang='ar')
            
            filename = f"{surah_folder}/{ayah_num}.mp3"
            tts.save(filename)
            
            print(f"Saved: {surah_name} - Ayah {ayah_num}")
            
            # مهم عشان ميحصلش حظر
            time.sleep(1)
        
        except Exception as e:
            print("Error:", e)
            time.sleep(3)

print("DONE ✅ Quran بالكامل اتحول لصوت")