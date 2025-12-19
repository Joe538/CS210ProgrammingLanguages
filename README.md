# CS210ProgrammingLanguages

- Summarize the project and what problem it was solving.
In this project there wwas a small local grocery store that needed a way to track all produce items in the store and you could select which items and it would give the amounts you selected. At the end it would back up all that data into a .dat file. Some other functionality in the 4 menu options besides adding an item or checking out and store data in the .dat file is that you could view your cart in two different ways. One way was to view all item names and the numeric amount while the other way was to view all the items and their amount in a histogram using '*' symbols.

- What did you do particularly well?
I believe for this project that I made very readable code that worked well and performed all the functions the grocery store required. I think I chose good names for classes and functions as well as left comments where I felt it was necessary.

- Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I have quite a few things I would have liked to change however hindsight is 20/20. The one main one I would love to change is build an iventory class that I could have used to handle all the interactions between the user and the inventory selections. That way I could have kept all the filenames private inside that class file and reduced some lines of code from the main file. It would have made things even more modular and incapsulated files that containted inventory data and back up data.

- Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
When I first started up this project I had what I though was a decent game plan. This game plan quickly fell apart after I thought about how I wanted to handle storing multiple grocery items that could be called up and cycled through. I decided to create a vector with a data type of my grocery items class. However, if I could go back I would create another class for the grocery items class that would contain all my methods for cycling through and connect it to the grocery item class since it would be a vector of grocery items.

- What skills from this project will be particularly transferable to other projects or course work?
The skills and ideas I picked up from planning and organizing. I think the code I wrote was decent but I could really expand on this project with some better planning and design as far as stucuture and classes go.

- How did you make this program maintainable, readable, and adaptable?
I made this code readable by using industry standards and creating the best naming schemes possible. I made this code maintainable by making it as modular as possible. I think it would be far more maintainable once you create the two classes I spoke about above. Adaptability is where I fell short, because I wish I had made a more broad item class so that you could make it a super class for far more items then just produce. I feel like this would be a better way to organize my class systems and which attributes go where for future use. Then once i add dairy products and such it could inherit more vague item classes and reduce redundancy.
