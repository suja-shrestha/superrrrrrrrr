// Function to validate the sign-up form
document.getElementById('signupForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevents the default form submission behavior
    
    const username = document.getElementById('username').value;
    const email = document.getElementById('email').value;
    const password = document.getElementById('password').value;
  
    // Simple validation - checking if fields are not empty
    if (username === '' || email === '' || password === '') {
      alert('Please fill in all fields');
      return false;
    }
  
    // Validation for email format
    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!emailRegex.test(email)) {
      alert('Please enter a valid email address');
      return false;
    }
  
    // Validation for password length
    if (password.length < 6) {
      alert('Password must be at least 6 characters');
      return false;
    }
  
    // If all validations pass, the form submits
    alert('Registration successful!');
    // You can add code here to submit the form data to a backend or perform other actions
    return true;
  });
  