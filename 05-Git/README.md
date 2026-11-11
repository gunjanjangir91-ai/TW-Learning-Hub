# Git – Version Control and Essential Commands

## 1. Introduction

Git is a distributed version control system used to track changes in files and coordinate software development.

It helps developers maintain project history, recover previous versions, work on different features independently, and collaborate with other developers.

## 2. Why Do We Need Version Control?

Without version control, developers may face problems such as:
- Accidentally overwriting files.
- Losing previous working versions.
- Difficulty identifying errors.
- Difficulty combining changes made by different contributors.

### Benefits
- Tracks modifications to files.
- Identifies who made changes and when.
- Helps restore earlier versions.
- Supports teamwork and collaboration.
- Maintains organized project history.

## 3. Types of Version Control Systems

1. **Local VCS:** Versions are managed on one computer.
2. **Centralized VCS:** A central server stores project history. Example: SVN.
3. **Distributed VCS:** Each clone contains repository history. Example: Git.

## 4. Git Architecture

Git works using three main areas:

- **Working Directory:** Where project files are created and edited.
- **Staging Area:** Where selected changes are prepared for the next commit.
- **Local Repository:** Stores committed changes and project history.
- **Remote Repository:** A shared repository hosted on a platform such as GitHub.

### Basic Workflow

Edit Files → Stage Changes → Commit Changes → Push to GitHub

## 5. Installing and Configuring Git

### Verify Git Installation

```bash
git --version
```

### Configure Username

```bash
git config --global user.name "Student Name"
```

### Configure Email

```bash
git config --global user.email "student@example.com"
```

### Verify Configuration

```bash
git config --global --list
```

These configuration values identify the author of commits. They do not authenticate the user to GitHub.

## 6. Creating a Git Repository

### Create a Project Directory

```bash
mkdir my-project
```

### Move Into the Directory

```bash
cd my-project
```

### Initialize Git

```bash
git init
```

The `git init` command initializes a new Git repository in the current directory.

## 7. Essential Git Commands

### Check Repository Status

```bash
git status
```

Displays untracked files, modified files, staged changes, and the current working tree status.

### Add a File to Staging

```bash
git add main.py
```

Stages a specific file for the next commit.

### Stage All Changes

```bash
git add .
```

Stages all changes in the current directory.

### Stage Multiple Files

```bash
git add file1.py file2.py
```

### Stage Files Using a Pattern

```bash
git add *.py
```

### Create a Commit

```bash
git commit -m "Add main program"
```

Records the staged changes in the local repository.

### View Commit History

```bash
git log
```

Displays commit hashes, authors, dates, and commit messages.

### View Compact Commit History

```bash
git log --oneline
```

Displays each commit in a compact, single-line format.

## 8. Comparing Changes

### View Unstaged Changes

```bash
git diff
```

Shows changes that have not yet been staged.

### View Staged Changes

```bash
git diff --staged
```

Shows changes prepared for the next commit.

### Compare Changes with HEAD

```bash
git diff HEAD
```

Shows tracked changes relative to the current commit, including staged and unstaged changes.

## 9. Inspecting Tracked Files

```bash
git ls-files
```

Lists files known to Git in the index. Untracked files are normally not displayed.

## 10. Ignoring Files Using .gitignore

The `.gitignore` file specifies files and directories that Git should intentionally ignore.

### Example

```gitignore
*.exe
*.log
.env
node_modules/
```

Common uses:
- Temporary files and caches.
- Local environment configuration.
- Log files.
- Generated files and unnecessary outputs.

Important: Adding a file to `.gitignore` does not remove it from Git history if it has already been committed.

## 11. Renaming and Deleting Files

### Rename or Move a File

```bash
git mv old.py new.py
```

Stages the file rename operation.

### Remove a Tracked File

```bash
git rm old.py
```

Removes the file from the working directory and stages its removal.

## 12. Undoing Changes

### Unstage a File

```bash
git restore --staged main.py
```

Removes a file from the staging area while preserving its working-directory changes.

### Discard Unstaged Changes

```bash
git restore main.py
```

Restores a tracked file from the index and discards its unstaged modifications.

**Warning:** This command can permanently discard uncommitted changes.

### Revert a Commit

```bash
git log --oneline
git revert COMMIT_ID
```

Creates a new commit that reverses the changes introduced by an earlier commit. Existing history is preserved.

## 13. Connecting Git to GitHub

A remote connects a local Git repository to a repository hosted on another system.

### Add a Remote

```bash
git remote add origin REPOSITORY_URL
```

Adds a remote repository connection named `origin`.

### Check Remote Connections

```bash
git remote -v
```

Displays the configured remote URLs for fetching and pushing.

### Rename the Current Branch to Main

```bash
git branch -M main
```

Renames the current branch to `main`.

### Push Code to GitHub

```bash
git push -u origin main
```

Uploads local commits to GitHub and sets the upstream tracking relationship.

## 14. Cloning a Repository

```bash
git clone REPOSITORY_URL
```

Cloning creates a local copy of a remote repository, including its files and Git history.

## 15. Fetching and Pulling Changes

### Fetch Changes

```bash
git fetch origin
```

Downloads remote updates without integrating them into the current branch.

### Pull Changes

```bash
git pull
```

Fetches updates and integrates them into the current branch, typically through merging or rebasing depending on configuration.

### Pull from a Specific Remote Branch

```bash
git pull origin main
```

Obtains and integrates changes from the remote `main` branch.

**Difference:** Fetch downloads remote updates for inspection, while pull also attempts to integrate them.

## 16. Working with Branches

A branch is an independent line of development that allows changes to be made without directly modifying another branch.

### List Branches

```bash
git branch
```

Displays local branches. The current branch is marked with an asterisk.

### Create a Branch

```bash
git branch feature-login
```

Creates a new branch without automatically switching to it.

### Switch Branches

```bash
git switch feature-login
```

Switches to the specified branch.

### Return to Main

```bash
git switch main
```

### Create and Switch to a New Branch

```bash
git switch -c feature-login
```

Creates a new branch and switches to it.

## 17. Merging Branches

Merging integrates changes from one branch into another.

### Example

```bash
git switch main
git merge feature-login
```

Steps:
1. Switch to the branch that should receive the changes.
2. Run the merge command with the source branch.
3. Resolve conflicts if Git reports them.
4. Test the result.

## 18. Merge Conflicts

A merge conflict occurs when Git cannot automatically combine competing changes.

### Conflict Resolution

1. Open the conflicting file.
2. Decide which changes to keep or combine.
3. Remove the conflict markers.
4. Stage the resolved file.
5. Complete the merge.

### Stage the Resolved File

```bash
git add main.py
```

## 19. Git Tags and Releases

A tag identifies a particular point in repository history, often used to mark a software version.

### List Tags

```bash
git tag
```

### Create an Annotated Tag

```bash
git tag -a v1.0.0 -m "Version 1.0.0"
```

### Display Tag Information

```bash
git show v1.0.0
```

### Push a Tag to GitHub

```bash
git push origin v1.0.0
```

Semantic versioning commonly follows the MAJOR.MINOR.PATCH format.

## 20. Merge vs Rebase

Both commands integrate changes, but they handle project history differently.

### Merge

```bash
git switch main
git merge feature
```

- Combines branch histories.
- May create a merge commit.
- Preserves existing commits.

### Rebase

```bash
git switch feature
git rebase main
```

- Replays commits on a new base.
- Rewrites commit identities.
- Can produce a linear history.

Avoid rebasing shared commits unless the team understands the consequences of rewriting history.

## 21. GitHub Collaboration Concepts

GitHub provides additional collaboration features around Git repositories.

### Pull Requests

A pull request proposes changes for review and integration into another branch.

Typical steps:
1. Push a feature branch to GitHub.
2. Open a pull request.
3. Explain the proposed changes.
4. Request reviews.
5. Address feedback.
6. Merge after approval.

A pull request is different from the `git pull` command.

### Forking

A fork is a separate repository copy under another account or namespace on a hosting platform.

Forks allow contributors to work independently and propose changes to the original project.

### Code Review

Code review helps improve code quality by checking correctness, identifying bugs, and suggesting improvements.

### GitHub Issues

Issues help teams track bugs, features, questions, and project tasks.

### GitHub Projects

GitHub Projects helps organize work and track progress using tables or board views.

## 22. Common Git Errors and Solutions

| Problem | Possible Solution |
|---|---|
| Untracked files | Use `git add` |
| Push rejected | Fetch and integrate remote changes |
| Merge conflict | Resolve conflicting files |
| Wrong branch | Check using `git branch` |
| Nothing to commit | Inspect using `git status` |
| Authentication failed | Check credentials and permissions |

## 23. Git Best Practices

1. Commit changes frequently and logically.
2. Write clear and meaningful commit messages.
3. Use descriptive branch names.
4. Review changes before committing.
5. Pull or fetch updates regularly.
6. Test changes before merging.
7. Keep credentials and unnecessary generated files out of the repository.
8. Maintain a useful README file.

## 24. Learning Outcome

Through this practical work, I learned how to initialize and manage Git repositories, track changes, stage and commit files, inspect project history, work with branches, resolve merge conflicts, and connect local repositories to GitHub.

I also understood how Git and GitHub support version control, collaboration, and organized software development.

## References

- Instructor's lecture slides: Version Control Tools – Git and GitHub.
- Official Git Documentation: https://git-scm.com/doc
- GitHub Documentation: https://docs.github.com/