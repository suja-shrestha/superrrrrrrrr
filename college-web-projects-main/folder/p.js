function showForm() {
    const responseForm = document.getElementById('responseForm');
    responseForm.style.display = 'block';
}

document.getElementById('proposalForm').addEventListener('submit', function (event) {
    event.preventDefault();
    const response = document.getElementById('response').value;
    if (response.toLowerCase() === 'yes') {
        this.alert('Congratulations! Wishing you both a lifetime of happiness together!');
    } else {
        alert('Thank you for your response.');
    }
});
