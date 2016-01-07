var exec = require('cordova/exec');

module.exports = {
    share: function(channel, success, error) {
        console.log('share', channel);
        exec(success, error, "LeanSocial", "share", [channel]);
    }
};
