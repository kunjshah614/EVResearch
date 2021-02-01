% close all
% 
% changes = 10;
% maxVel = 100;
% maxTime = 60*60*10 % total time in seconds
% 
% time = 0;
% velocity = 0;
% 
% for i = 1:changes
%     time = [time; rand(1)];
%     velocity = [velocity; rand(1)];
% end
% 
% time = sort(time); % sort from smallest to largest
% 
% timeScale = maxTime/max(time); % scale data
% time = time*timeScale
% velScale = maxVel/max(velocity)
% velocity = velocity*velScale
% 
% net = [time, velocity];
% 
% disp(net)
% 
% save('randomDriverData.mat', 'net', '-v4')
% 
% plot(net(:,1), net(:,2))

close all
sim('driveCycle');
plot(tout, REE)
net = [tout, REE]
save('randomDriverData.mat', 'net', '-v4')