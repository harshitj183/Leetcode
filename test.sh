TOTAL=366
EASY=240
MEDIUM=115
HARD=11
sed -i -E "s/LeetCode-[0-9]+ Solved/LeetCode-${TOTAL} Solved/g" README.md
sed -i -E "s/Total Problems Solved: [0-9]+/Total Problems Solved: ${TOTAL}/g" README.md
sed -i -E "s/\| 🟢 Easy \| \*\*[0-9]+\*\* \|/\| 🟢 Easy \| \*\*${EASY}\*\* \|/g" README.md
sed -i -E "s/\| 🟡 Medium \| \*\*[0-9]+\*\* \|/\| 🟡 Medium \| \*\*${MEDIUM}\*\* \|/g" README.md
sed -i -E "s/\| 🟠 Hard \| \*\*[0-9]+\*\* \|/\| 🟠 Hard \| \*\*${HARD}\*\* \|/g" README.md
sed -i -E "s/\| \*\*Total\*\* \| \*\*[0-9]+\*\* \|/\| \*\*Total\*\* \| \*\*${TOTAL}\*\* \|/g" README.md
