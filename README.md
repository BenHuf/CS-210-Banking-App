# CS-210-Banking-App
Repo for SNHU CS-210 Course

## Project
This project demonstrates working with CPP headers, classes, and mathematical functions. This application simulates a banking application for a Airgead Banking to solve the problem of how much money could be earned through interest with or without additional monthly deposits to an account. You can enter a principal amount and the app will then calculate the interest earned and total amount after each month for a given period with or without additional monthly deposits. 

## What I did well
In this project I think I followed my initial plan very well. With all coding projects an hour of planning is worth several hours of directionless coding. In the included Bank.txt file you can see my initial gameplan. I was able to map out the classes used and functionality well ahead of any programming efforts -- and then stuck very closely to that initial plan. This contributed to getting this project up and running very qucikly.

## Room for improvement
One area that could stand to be improved upon is separation of bank and application functionality. Ideally all interation and console I/O should be handled by the application class. As is stands the application only handles the main menu functioanlity. I think a refactor to move the report output to the application class using member data of the appropriate bank class would be a slight improvement to the overall structure of this project.

## Challenges
The biggest challege faced when developing this application came in the form of the output tables/reports and structuring them in a tidy, easy to read way. This was the first time I had attempted to use a table in console output and there are cases where numbers are off center from their intended row or larger numbers push entire rows off a few spaces. If I were to tackle this again I would use a package like ncurses to make the formatting easier.

## Skills Gained
One skill I believe I gained from this project is proper structuring of a cpp project. Keeping main() clean and minimized while abstracting all important functionality to the appropriate classes is something I'm more confident doing after tackling this project. 

## Maintainability
By structuring this project into a bank and application class I made the code more maintainable and extensible. Most class methods are very reusable and functionality can be added to the existing methods or new methods can be added very quickly to the appropriate classes. Main() could be adapted to handle many different instances of the bank class while using the same instance of application and all menu print statements could be edited to contain different verbiage very easily.