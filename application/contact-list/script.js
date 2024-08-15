// script.js

const contacts = [
    { name: 'John Doe', status: 'Hey there! I am using WhatsApp.' },
    { name: 'Jane Smith', status: 'At work right now' },
    { name: 'Alice Johnson', status: 'Available' },
];

document.addEventListener('DOMContentLoaded', () => {
    renderContacts();
});

function renderContacts() {
    const contactList = document.getElementById('contacts');
    contactList.innerHTML = ''; // Clear existing contacts

    contacts.forEach((contact, index) => {
        const li = document.createElement('li');
        li.innerHTML = `
            <div class="contact-info">
                <div class="contact-name">${contact.name}</div>
                <div class="contact-status">${contact.status}</div>
            </div>
            <button class="delete-btn" onclick="removeContact(${index})">🗑️</button>
        `;
        contactList.appendChild(li);
    });
}

function addContact() {
    const contactNameInput = document.getElementById('contact-name');
    const newContactName = contactNameInput.value.trim();

    if (newContactName) {
        contacts.push({ name: newContactName, status: 'New to WhatsApp' });
        renderContacts();
        contactNameInput.value = '';
    }
}

function removeContact(index) {
    contacts.splice(index, 1);
    renderContacts();
}
