# Linked List Tutor

## 1. What is "Linked List Tutor"?

**It's a small (very small) program made for learning and practice purposes in the use of the C programming language, this program allows us to create and display linked lists**.  Additionally, it's also my intention to share with other learners, like myself, a suitable way (I hope) to work with implementation and definition files, in such a way that the reader can clarify their doubts on this subject and can find in this example a guide to carry out their projects.

## 2. How are the files organized?

Let's consider grouping the files into two blocks:

### Source code files (.c and .h files):
**I've created two folders, the `/src/` and the `/include/` folder.** The `/src/` folder groups the implementation files and the `/include/` folder groups the definition files. **Here is a sample of the structure:**

![](http://juliozaravia.com/git-images/structure_one.jpg)

### Generated files (.o and .exe files):
**I've created two folders, the `/obj/` and the `/bin/` folder.** The `/obj/` folder groups the object files obtained after the compilation process and the `/bin/` folder contains the executable file obtained after the linking process. **Here is a sample of the structure:**

![](http://juliozaravia.com/git-images/structure_two.jpg)

## 3. How can I produce the executable file?

Because this is (still) a humble prototype made for learning purposes, I've not included an executable version. Instead, **I've included a Makefile that you can adapt to your needs and generate the respective binary**. If you don't know how to use a Makefile, here are three extraordinary resources:

- [Playlist (in Spanish) of an extraordinary YouTube channel where I found a complete tutorial on Make / Makefile.](https://www.youtube.com/playlist?list=PLTd5ehIj0goOrqKZPvq1Np-8PUFcQSSm- "Playlist (in Spanish) of an extraordinary YouTube channel where I found a complete tutorial on Make / Makefile.")
- [Tutorial with basic concepts for using a Makefile.](https://www.youtube.com/watch?v=aw9wHbFTnAQ "Tutorial with basic concepts for using a Makefile.")
- [And, if you want to delve into the subject, it is best to read the official documentation.](https://www.gnu.org/software/make/manual/make.html "And, if you want to delve into the subject, it is best to read the official documentation.")

**Note:** *Obviously, if you use an IDE, this procedure is already covered and will depend on the respective IDE.*

Once the binary file has been generated, **we must execute it adding the `create` parameter to indicate that we want to create the linked list**.

![](http://juliozaravia.com/git-images/structure_3.jpg)

Then, we just have to follow the instructions that the program will print on the screen.

## 4. I'm a learner. How can I take advantage of this project?

I strongly recommend to all newbies in the C language, like me, **to review in detail the structure of the project and the way in which the definition and implementation files have been arranged**. 

I've invested many hours to document myself and make this small implementation that can be very useful for any apprentice. Seeing this kind of implementation in a functional project can save you a lot of headaches and endless searches for information.

## 5. Anything else?
- All constructive criticisms are very well received, you can send them to me at hey@juliozaravia.com.
- If you're going to criticize this project in an offensive way, please don't do it, remember that no one comes to this world knowing everything.
- If you want to improve the code, you're free to do so, just let me know what you changed or improved so I can learn from you.
- I know, my English is poor. I'm working on it too. Thanks for understand.

That's it, I really enjoyed working on this version, if you took the time to read this, you are a good person and I wish you a good day.
