import requests
from bs4 import BeautifulSoup

siteHTML = requests.get(
    'https://www.iheartbrazil.com/national-anthem-of-brazil/').text

soup = BeautifulSoup(siteHTML, 'html.parser')

songPart = soup.find(
    'div', class_='article-post post-1292 post type-post status-publish format-standard has-post-thumbnail hentry category-culture mv-content-wrapper mvt-content').find_all('p')[26:39]

for line in songPart:
    print(line.text)
