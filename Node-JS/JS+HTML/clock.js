function startCountdown(durationInSeconds) {
    const timerElement = document.getElementById("timer");
    let timeRemaining = durationInSeconds;
    
    function updateTimer() {
        const minutes = Math.floor(timeRemaining / 60);
        const seconds = timeRemaining % 60;
        timerElement.textContent = `${minutes}:${seconds < 10 ? '0' : ''}${seconds}`;
        
        if (timeRemaining > 0) {
            timeRemaining--;
            setTimeout(updateTimer, 1000);
        } else {
            timerElement.textContent = "Time's up!";
        }
    }
    
    updateTimer();
}

startCountdown(10);