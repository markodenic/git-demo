# git-demo

The pourpose of this repository is to help you make your first open source contribution.

## Step 1: Find a project you want to contribute to.

For the porpose of your first contribution , this is the project you will be contributing to.

## Step 2: Fork the repository.

Once you’re there, click the “Fork” button on the top right.

![image](https://user-images.githubusercontent.com/58680992/127108239-e049f437-cb12-4667-b7f2-d5b79ee22c53.png)

This will copy the whole project under your GitHub user; which will look like this :

![image](https://user-images.githubusercontent.com/58680992/127108385-ed2119ee-f71c-4938-8c2b-6df1ddb43cce.png)

Click on the link which looks something like `https://github.com/hrishikeshnikam2000/git-demo.git`

![image](https://user-images.githubusercontent.com/58680992/127108576-f6c3403b-aa18-49d8-8678-d050496b1c4b.png)

## Step 3: Clone the repository.

Open your git bash/terminal , and run the following command :

` git clone https://github.com/<YourUsername>/git-demo.git `

Screenshot:

![image](https://user-images.githubusercontent.com/58680992/127108982-39a93cd5-ce67-4df8-9d3d-ac7ffaaa5421.png)

This will create a local copy of the repository.

## Step 4: Create a new remote for the upstream repository.

For this we will use the following command:

` git remote add upstream https://github.com/markodenic/git-demo `

## Step 5: Create a new branch.

We can do this by running the command:

` git checkout -b my-branch `

Screenshot :

![image](https://user-images.githubusercontent.com/58680992/127109773-3390234c-462a-4f66-bc0f-284b574e6d82.png)

## step 6 : Add some code.

Now, the time has come, we actually add some code. 😊
After adding the changes, you can check them by running 

`git status`

If everything is as expected, we can add the code to the staging area:

`git add -A`

## Step 7: Commit your changes.

This is the last step before pushing the code to the repository.
Run the command:


`git commit -m "Adding an awesome feature to my-branch"`

## Step 8: Push the changes to your repository.

Finally, we’re ready to push the changes.

`git push` 

is the command we need in this case. Let’s run it:

`git push -u origin my-branch `

## Step 9: Create a pull request.

Once we pushed the changes to our repository, we are ready to open the pull request.
Go back to your repository and click on the “Compare and Pull Request” button.

If everything went OK, the maintainer of the repository will merge your pull request.

# Congratulations, you made your first open-source contribution!
