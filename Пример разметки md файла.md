## Проверка наличия возможности оформить Test Case  в виде .md файла.





# Test Case

| **step**| **expected result** |
|------|---------------|
| 1. navigate to home page | home page should be loaded without error in console |
| 2.verify that profile icon is presented| icon should be pleced at upper left corner |
| 3. authorize as admin | login successfully |
| 4. verify that footer contains 'contact us' link | link should be displayed |

# Test result

|  <div align="center">step</div> | <div align="center">actual result </div> | expected result | conclusion |
|------|---------------|-----------------|------------|
| 1. navigate to home page | home page loaded without error in console | no errors in console |<div align="center">✅</div>|
| 2.verify that profile icon is presented | yes, in upper left corner of page | upper left corner |<div align="center">✅</div>|
| 3. authorize as admin | login successfully | logon as admin |<div align="center">✅</div>|
| 4.verify that footer contains 'contact us' link | only copyright and release date | link should be displayed |<div align="center">❌</div>|