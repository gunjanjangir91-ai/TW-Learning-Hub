# GitHub – Collaborative Development Platform

## 1. Introduction

GitHub is a cloud-based platform used to host Git repositories and collaborate on software development projects. It allows developers to store code online, track changes, manage projects, and work together from different locations.

Git is the version control system, while GitHub provides an online platform for hosting and collaboration.

## 2. Main Features of GitHub

- **Repositories:** Store project files and their complete version history.
- **README:** Provides information about the project, its purpose, and instructions.
- **Issues:** Track bugs, tasks, and feature requests.
- **Pull Requests:** Propose changes and request their review before merging.
- **Branches:** Allow developers to work on different features independently.
- **Projects:** Organize and track project tasks.
- **Code Review:** Review code and suggest improvements.
- **Forking:** Create a personal copy of another user's repository.

## 3. Creating a GitHub Account

1. Visit [GitHub](https://github.com/).
2. Click **Sign up**.
3. Enter your email address and create a password.
4. Choose a username.
5. Complete the verification process.
6. Sign in to your GitHub account.

## 4. Creating a Repository

A repository is a storage location for a project's files and version history.

Steps:

1. Sign in to GitHub.
2. Click the **New repository** option.
3. Enter a repository name.
4. Add a short description.
5. Choose Public or Private visibility.
6. Click **Create repository**.

## 5. Connecting a Local Repository to GitHub

A local Git repository can be connected to a remote GitHub repository.

```bash
git remote add origin REPOSITORY_URL
git remote -v
git branch -M main
git push -u origin main
```

Explanation:

- `git remote add origin`: Connects the local repository to GitHub.
- `git remote -v`: Displays the remote repository URLs.
- `git branch -M main`: Renames the current branch to main.
- `git push -u origin main`: Uploads commits to GitHub and sets the upstream branch.

## 6. Cloning a Repository

Cloning creates a local copy of a remote repository.

```bash
git clone REPOSITORY_URL
```

This downloads the repository files and their version history to the local computer.

## 7. Fetching and Pulling Changes

These commands help synchronize local and remote repositories.

**Fetch:**

```bash
git fetch origin
```

Downloads changes from the remote repository without automatically merging them into the current branch.

**Pull:**

```bash
git pull origin main
```

Downloads and integrates changes from the remote main branch into the current branch.

## 8. Branches and Collaboration

Branches allow developers to work on different features without directly modifying the main branch.

Example:

```bash
git branch feature-login
git switch feature-login
```

Or create and switch to a branch in one command:

```bash
git switch -c feature-login
```

After completing the work, changes can be merged into the main branch.

```bash
git switch main
git merge feature-login
```

## 9. Pull Requests

A Pull Request (PR) is a request to merge changes from one branch into another.

Steps:

1. Create a new feature branch.
2. Make the required changes.
3. Commit and push the changes.
4. Open the repository on GitHub.
5. Click **Compare & pull request**.
6. Add a title and description.
7. Submit the Pull Request.
8. Review the changes and merge the request when approved.

Pull Requests support collaboration and code review.

## 10. Forking a Repository

Forking creates a personal copy of another user's repository under your GitHub account.

It is useful when contributing to open-source projects or experimenting with someone else's code.

**Difference between Fork and Clone:**

- Fork creates a copy of a repository on GitHub.
- Clone downloads a repository to the local computer.

## 11. Merge Conflicts

A merge conflict occurs when Git cannot automatically combine changes, usually because different branches modify the same part of a file.

Steps to resolve:

1. Open the file containing the conflict.
2. Identify the conflicting sections.
3. Choose or combine the required changes.
4. Remove conflict markers.
5. Save the file.
6. Stage and commit the resolved file.

```bash
git add filename
git commit -m "Resolve merge conflict"
```

## 12. GitHub Issues and Projects

**Issues:**
- Used to report bugs and suggest improvements.
- Help developers track problems and tasks.
- Allow discussion and assignment of work.

**Projects:**
- Help organize tasks and monitor progress.
- Support project planning and task management.
- Can be used with Issues and Pull Requests.

## 13. GitHub Security and Best Practices

- Never upload passwords, API keys, or secret credentials.
- Use meaningful repository names.
- Write clear README files.
- Make small and meaningful commits.
- Review code before merging.
- Keep repositories organized.
- Use appropriate repository permissions.
- Keep important project files updated.

## 14. Advantages of GitHub

- Provides online code hosting.
- Supports teamwork and collaboration.
- Maintains project history.
- Makes code review easier.
- Supports open-source development.
- Helps manage software projects.
- Provides access to projects from different devices.

## 15. Learning Outcome

Through this practical, I learned how to use GitHub for hosting repositories, connecting local projects, pushing and pulling changes, managing branches, creating Pull Requests, and collaborating with other developers.

## 16. References

- [GitHub Official Website](https://github.com/)
- [GitHub Documentation](https://docs.github.com/)
- [Git Documentation](https://git-scm.com/doc/)