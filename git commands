**1/ generate ssh-key**

    ssh-keygen

**2/ clone code**
  
    git clone <your_repo>
  
**3/ pull code**
  
    git pull origin <your branch>

**4/ check commit behind and a head**
  
As an answer on your question 1, here's a trick I found to compare two branches and show how many commits each branch is ahead of the other (a more general answer on your question 1):

For local branches: `git rev-list --left-right --count master...test-branch`

For remote branches: `git rev-list --left-right --count origin/master...origin/test-branch`

This gives output like the following:

`2       1`

This output means: "Compared to master, test-branch is 1 commit ahead and 2 commits behind."

You can also compare local branches with remote branches, e.g. `origin/master...master` to find out how many commits a local branch (here master) is ahead/behind its remote counterpart.

**5/ check status**
  
    git status

**6/ add code**
  
    git add .
  
    git add <your specific file or floder>
    
**7/ commit code**
  
    git commit -m '<your content>' -m '<your name>'

**8/ push code**
  
    git push origin -m <your branch>
    
**9/ Merge**
While you are working on your branch, other developers may update the main branch with their branch. This action means your branch is now out of date of the main branch and missing content. You can merge the main branch into your branch by checking out your branch and using the same git merge command.

git checkout <branch name>
git merge main

**10/ delete local branch**

    git branch --delete <your branch>
    
    git branch -D <your branch>
