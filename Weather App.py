import requests

API_KEY = "your_api_key"
city = input("Enter city: ")
url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&appid={API_KEY}&units=metric"

response = requests.get(url)
data = response.json()

if data["cod"] == 200:
    print(f"Weather in {city}: {data['weather'][0]['description']}, {data['main']['temp']}°C")
else:
    print("City not found!")
