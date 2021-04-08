#include <moutil.c>
PreNonAliasDef(6)
PreNonAliasDef(7)
PreNonAliasDef(8)
PreNonAliasDef(9)
PreNonAliasDef(10)
StartNonAlias(5)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.FFzero.y", \
"Connector of Real output signal", "regenPMSM.eRegen.controller.coreElement.PID.FFzero.k", 1,\
 7, 7880, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addFF.u1", \
"Connector of Real input signal 1", "regenPMSM.eRegen.controller.coreElement.PID.gainPID.y", 1,\
 5, 1073, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addFF.u2", \
"Connector of Real input signal 2", "regenPMSM.eRegen.controller.coreElement.PID.FFzero.k", 1,\
 7, 7880, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addFF.y", \
"Connector of Real output signal [N.m]", "regenPMSM.eRegen.controller.coreElement.PID.limiter.u", 1,\
 5, 1079, 0)
DeclareParameter("regenPMSM.eRegen.controller.coreElement.PID.addFF.k1", \
"Gain of input signal 1", 7881, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.addFF.k2", \
"Gain of input signal 2", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.useThermalPort", "True: thermal connector is provided, false: temperature is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.p1.v", "Potential at the pin [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.p1.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036, 132)
DeclareVariable("regenPMSM.eRegen.inverter.n1.v", "Potential at the pin [V]", \
0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.inverter.n1.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.pin_n.i", 1, 5, 1048, 132)
DeclareAlias2("regenPMSM.eRegen.inverter.p2.v", "Potential at the pin [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.inverter.p2.i", "Current flowing into the pin [A]",\
 0.0, 0.0,0.0,0.0,0,776)
DeclareVariable("regenPMSM.eRegen.inverter.n2.v", "Potential at the pin [V]", \
0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.inverter.n2.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085, 132)
DeclareAlias2("regenPMSM.eRegen.inverter.inputVoltageSensor1.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.inverter.inputVoltageSensor1.p.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.inverter.inputVoltageSensor1.n.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("regenPMSM.eRegen.inverter.inputVoltageSensor1.n.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.inverter.inputVoltageSensor1.v", \
"Voltage between pin p and n (= p.v - n.v) as output signal [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.product1.u1", "Connector of Real input signal 1 [A]",\
 "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.product1.u2", "Connector of Real input signal 2 [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareVariable("regenPMSM.eRegen.inverter.product1.y", "Connector of Real output signal [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor1.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor1.p.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor1.n.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor1.n.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegenPowerSensor.pc.i", -1, 5, 1036,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor1.i", \
"Current in the branch from p to n as output signal [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1,\
 5, 1036, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor2.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor2.p.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor2.n.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor2.n.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.inputCurrentSensor2.i", \
"Current in the branch from p to n as output signal [A]", "regenPMSM.eRegen.inverter.p2.i", 1,\
 5, 1085, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.inputVoltageSensor2.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.inverter.inputVoltageSensor2.p.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.inverter.inputVoltageSensor2.n.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("regenPMSM.eRegen.inverter.inputVoltageSensor2.n.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.inverter.inputVoltageSensor2.v", \
"Voltage between pin p and n (= p.v - n.v) as output signal [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.product2.u1", "Connector of Real input signal 1 [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.product2.u2", "Connector of Real input signal 2 [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 0)
DeclareVariable("regenPMSM.eRegen.inverter.product2.y", "Connector of Real output signal [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.u", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.u", \
"DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 0)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.u", \
"AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 0)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.u", \
"DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 0)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.u", "AC current of the inverter used for energy analysis (EA) models [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.u", "AC voltage of the inverter used for energy analysis (EA) models [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareVariable("regenPMSM.eRegen.inverter.useVoltageGuess", "Use start value for iteration during initialization (setting 'start' with 'fixed=false') [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.inverter.V_guess", "Start value for iteration during initialization [V]",\
 7882, 400, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.inverter.data.eta", "[1]", 7883, 1, 0.0,\
1E+100,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.data.variablePower", "Set power by parameter (true) or real input (false) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.inverter.data.P_constant", "Desired power: postive is consumed, negative is generated [W]",\
 7884, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.data.V_min", "For lower voltages, power will be limited [V]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.data.V_max", "For higher voltages, power will be limited [V]",\
 100000.0, 0.0,1E+100,0.0,0,513)
DeclareParameter("regenPMSM.eRegen.inverter.data.I_max", "Maximum possible DC current (-I_max < I < I_max) [A]",\
 7885, 100000.0, 0.0,1E+100,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.data.actionLim", "Optionally warn or stop when power is limited [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.data.actionDiv0", "Optionally warn or stop when preventing divisions by zero [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.data.V_eps", "Threshold for minimum voltage, values between +eps/-eps will be treated as eps [V]",\
 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.data.useDynamics", "Use PT1 dynamics to filter the load's demanded power [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.inverter.data.T_PT1", "Time constant of optional PT1 [s]",\
 7886, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.inverter.data.initType", "Type of initialization (1: no init, 2: steady state, 3/4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 7887, 1, 1.0,4.0,0.0,0,564)
DeclareParameter("regenPMSM.eRegen.inverter.data.initialCurrent", \
"Initial current through the power source [A]", 7888, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.eta", "Efficiency of the inverter [1]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.variablePower", \
"Set power by parameter (true) or real input (false) [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.P_constant", \
"Desired power: postive is consumed, negative is generated [W]", 7889, 1, \
0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.V_min", "For lower voltages, power will be limited [V]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.V_max", "For higher voltages, power will be limited [V]",\
 100000.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.I_max", "Maximum possible DC current (-I_max < I < I_max) [A]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.actionLim", \
"Optionally warn or stop when power is limited [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.actionDiv0", \
"Optionally warn or stop when preventing divisions by zero [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.V_eps", "Threshold for minimum voltage, values between +eps/-eps will be treated as eps [V]",\
 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.useDynamics", \
"Use PT1 dynamics to filter the load's demanded power [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.T_PT1", "Time constant of optional PT1 [s]",\
 7890, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.initType", \
"Type of initialization (1: no init, 2: steady state, 3/4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 7891, 1, 1.0,4.0,0.0,0,564)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.initialCurrent", \
"Initial current through the power source [A]", 7892, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.useVoltageGuess", \
"Use start value for iteration during initialization (setting 'start' with 'fixed=false') [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.V_guess", \
"Start value for iteration during initialization [V]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.P_actual", \
"Instantaneous power [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.i", \
"Current through the load [A]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.i_limit", \
"Instantaneous current limit [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.i_des", \
"Instantaneous current limit [A]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.v", \
"Voltage drop of the two pins (= p.v - n.v) [V]", "simplePower.constantVoltage.V", 1,\
 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.p.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", 1,\
 5, 1115, 132)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.n.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.n.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", -1,\
 5, 1115, 132)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.variablePower",\
 "Set power by parameter (true) or real input (false) [:#(type=Boolean)]", true,\
 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.P_constant", \
"Desired power: postive is consumed, negative is generated [W]", 1, 0.0,0.0,0.0,\
0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.V_min", \
"For lower voltages, power will be limited [V]", 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.V_max", \
"For higher voltages, power will be limited [V]", 100000.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.I_max", \
"Maximum possible DC current (-I_max < I < I_max) [A]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.actionLim", \
"Optionally warn or stop when power is limited [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.actionDiv0", \
"Optionally warn or stop when preventing divisions by zero [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.V_eps", \
"Threshold for minimum voltage, values between +eps/-eps will be treated as eps [V]",\
 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.useDynamics", \
"Use PT1 dynamics to filter the load's demanded power [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.T_PT1", \
"Time constant of optional PT1 [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.initType", \
"Type of initialization (1: no init, 2: steady state, 3/4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.initialCurrent",\
 "Initial current through the power source [A]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.useVoltageGuess",\
 "Use start value for iteration during initialization (setting 'start' with 'fixed=false') [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.V_guess", \
"Start value for iteration during initialization [V]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.P_variable", \
"Desired power input, postive is consumed, negative is generated power [W]", \
"regenPMSM.eRegen.inverter.coreElement.losses.y", 1, 5, 1158, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.divNoZero.u1", \
"Connector of Real input signal 1 [W]", "regenPMSM.eRegen.inverter.coreElement.losses.y", 1,\
 5, 1158, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.divNoZero.u2", \
"Connector of Real input signal 2 [V]", "simplePower.constantVoltage.V", 1, 7, 7655,\
 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.divNoZero.y", \
"Connector of Real output signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i_des", 1,\
 5, 1117, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.divNoZero.eps",\
 "Smallest value used for division [V]", 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.divNoZero.considerSign",\
 "True: sign is considered in case of 'b' < 'eps' [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.divNoZero.action",\
 "Optionally inform about divisions by zero with asserts [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.signalCurrent.p.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.signalCurrent.p.i",\
 "Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", 1,\
 5, 1115, 132)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.signalCurrent.n.v",\
 "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.signalCurrent.n.i",\
 "Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", -1,\
 5, 1115, 132)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.signalCurrent.v",\
 "Voltage drop between the two pins (= p.v - n.v) [V]", "simplePower.constantVoltage.V", 1,\
 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.signalCurrent.i",\
 "Current flowing from pin p to pin n as input signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", 1,\
 5, 1115, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.desiredPower.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.coreElement.losses.y", 1,\
 5, 1158, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.desiredPower.variableOutput",\
 "If true the input signal u is used as output, otherwise the parameter p [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.desiredPower.p",\
 "Constant output value [W]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.desiredPower.u", \
"Variable output value [W]", "regenPMSM.eRegen.inverter.coreElement.losses.y", 1,\
 5, 1158, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.u",\
 "Connector of Real input signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i_des", 1,\
 5, 1117, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.y",\
 "Connector of Real output signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", 1,\
 5, 1115, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.strict",\
 "= true, if strict limits with noEvent(..) [:#(type=Boolean)]", true, 0.0,0.0,\
0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.homotopyType",\
 "Simplified model for homotopy-based initialization [:#(type=Modelica.Blocks.Types.VariableLimiterHomotopy)]",\
 2, 1.0,3.0,0.0,0,517)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.ySimplified",\
 "Fixed value of output in simplified model [A]", 7893, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.limit",\
 "Value used for maximum and minimum of input u [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i_limit", 1,\
 5, 1116, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.limit1",\
 "Upper limit [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.limit2",\
 "Lower limit [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.currentLimiter.simplifiedExpr",\
 "Simplified expression for homotopy-based initialization [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i_des", 1,\
 5, 1117, 1024)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.positiveVoltage.u",\
 "Connector of Real input signal [V]", "simplePower.constantVoltage.V", 1, 7, 7655,\
 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.positiveVoltage.y",\
 "Connector of Real output signal [V]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.positiveVoltage.generateEvent",\
 "Choose whether events shall be generated [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.u", \
"Connector of Real input signal [V]", "regenPMSM.eRegen.inverter.coreElement.lossPower.positiveVoltage.y", 1,\
 5, 1143, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.y", \
"Connector of Real output signal [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.u1", \
"Lower boundary of input u, switching from constant value y1 to sin^2 interpolation [V]",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.u2", \
"Upper boundary of input u, switching from sin^2 interpolation to constant value y2 [V]",\
 1, 0.0,0.0,0.0,0,513)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.y1",\
 "Minimum value for y [A]", 7894, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.y2", \
"Maximum value for y [A]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.u", \
"Connector of Real input signal [V]", "regenPMSM.eRegen.inverter.coreElement.lossPower.positiveVoltage.y", 1,\
 5, 1143, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.y", \
"Connector of Real output signal [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.u1", \
"Lower boundary of input u, switching from constant value y1 to sin^2 interpolation [V]",\
 100000.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.u2", \
"Upper boundary of input u, switching from sin^2 interpolation to constant value y2 [V]",\
 110000.00000000001, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.y1", \
"Minimum value for y [A]", 0, 0.0,0.0,0.0,0,513)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.y2",\
 "Maximum value for y [A]", 7895, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageLimit.u1",\
 "Connector of Real input signal 1 [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.limI_minV.y", 1,\
 5, 1145, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageLimit.u2",\
 "Connector of Real input signal 2 [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.limI_maxV.y", 1,\
 5, 1149, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageLimit.y", \
"Connector of Real output signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i_limit", 1,\
 5, 1116, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.noFirstOrder.u", \
"Connector of Real input signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", 1,\
 5, 1115, 1024)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.noFirstOrder.y", \
"Connector of Real output signal [A]", "regenPMSM.eRegen.inverter.coreElement.lossPower.i", 1,\
 5, 1115, 1024)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageSensor.p.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 1028)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageSensor.p.i",\
 "Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,2825)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageSensor.n.v",\
 "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageSensor.n.i",\
 "Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,2825)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.lossPower.voltageSensor.v",\
 "Voltage between pin p and n (= p.v - n.v) as output signal [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 1024)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.providedPower.u1", \
"Connector of Real input signal 1 [W]", "regenPMSM.eRegen.inverter.coreElement.P_AC", 1,\
 5, 1167, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.providedPower.u2", \
"Connector of Real input signal 2 [W]", "regenPMSM.eRegen.inverter.coreElement.P_DC", 1,\
 5, 1168, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.providedPower.y", \
"Connector of Real output signal [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.losses.k", \
"Gain value multiplied with input signal [1]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.losses.u", "Input signal connector [W]",\
 "regenPMSM.eRegen.inverter.coreElement.providedPower.y", 1, 5, 1156, 0)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.losses.y", \
"Output signal connector [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.computePowerDC.u1", \
"Connector of Real input signal 1 [W]", "regenPMSM.eRegen.inverter.coreElement.P_AC", 1,\
 5, 1167, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.computePowerDC.u2", \
"Connector of Real input signal 2 [W]", "regenPMSM.eRegen.inverter.coreElement.losses.y", 1,\
 5, 1158, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.computePowerDC.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.coreElement.P_DC", 1,\
 5, 1168, 0)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.computePowerDC.k1", \
"Gain of input signal 1 [1]", 7896, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.inverter.coreElement.computePowerDC.k2", \
"Gain of input signal 2 [1]", 7897, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.pc.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.pc.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.nc.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.nc.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.pv.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.pv.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.nv.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.nv.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.power", \
"Instantaneous power as output signal [W]", "regenPMSM.eRegen.inverter.coreElement.P_AC", 1,\
 5, 1167, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.voltageSensor.p.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.voltageSensor.p.i",\
 "Current flowing into the pin [A]", 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.voltageSensor.n.v",\
 "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.voltageSensor.n.i",\
 "Current flowing into the pin [A]", 0.0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.voltageSensor.v",\
 "Voltage between pin p and n (= p.v - n.v) as output signal [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.currentSensor.p.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.currentSensor.p.i",\
 "Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.currentSensor.n.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.currentSensor.n.i",\
 "Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.currentSensor.i",\
 "Current in the branch from p to n as output signal [A]", "regenPMSM.eRegen.inverter.p2.i", 1,\
 5, 1085, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.product.u1", \
"Connector of Real input signal 1 [V]", "simplePower.constantVoltage.V", 1, 7, 7655,\
 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.product.u2", \
"Connector of Real input signal 2 [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.powerSensorAC.product.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.coreElement.P_AC", 1,\
 5, 1167, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.p1.v", "Potential at the pin [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.p1.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036, 132)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.n1.v", "Potential at the pin [V]",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.n1.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.pin_n.i", 1, 5, 1048, 132)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.p2.v", "Potential at the pin [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.p2.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 132)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.n2.v", "Potential at the pin [V]",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.inverter.coreElement.n2.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085, 132)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.P_AC", "[W]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.coreElement.P_DC", "[W]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareParameter("regenPMSM.eRegen.inverter.gain.k", "Gain value multiplied with input signal [1]",\
 7898, 0.5, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.gain.u", "Input signal connector [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.gain.y", "Output signal connector [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.u1", "Connector of Real input signal 1 [W]",\
 "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.u2", "Connector of Real input signal 2 [W]",\
 "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.y", "Connector of Real output signal [W]",\
 "regenPMSM.eRegen.inverter.gain.u", 1, 5, 1169, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.u1_absActive", \
"Apply abs on u1 [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.u2_absActive", \
"Apply abs on u2 [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.y_absActive", "Apply abs on y [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.inverter.addAbs.k1", "Gain of upper input u1 [1]",\
 7899, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.inverter.addAbs.k2", "Gain of lower input u2 [1]",\
 7900, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.add.u1", "Connector of Real input signal 1 [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.add.u2", "Connector of Real input signal 2 [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.add.y", "Connector of Real output signal [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.add.k1", "Gain of input signal 1 [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.add.k2", "Gain of input signal 2 [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u1.u", \
"Connector of Real input signal [W]", "regenPMSM.eRegen.inverter.product2.y", 1,\
 5, 1094, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u1.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.addAbs.add.u1", 1,\
 5, 1174, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u1.absActive", \
"If true, then y = abs(u), if not y = u [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u1.abs.u", \
"Connector of Real input signal [W]", "regenPMSM.eRegen.inverter.product2.y", 1,\
 5, 1094, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u1.abs.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.addAbs.add.u1", 1,\
 5, 1174, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u1.abs.generateEvent",\
 "Choose whether events shall be generated [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u2.u", \
"Connector of Real input signal [W]", "regenPMSM.eRegen.inverter.product1.y", 1,\
 5, 1090, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u2.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.addAbs.add.u2", 1,\
 5, 1175, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u2.absActive", \
"If true, then y = abs(u), if not y = u [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u2.abs.u", \
"Connector of Real input signal [W]", "regenPMSM.eRegen.inverter.product1.y", 1,\
 5, 1090, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u2.abs.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.addAbs.add.u2", 1,\
 5, 1175, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_u2.abs.generateEvent",\
 "Choose whether events shall be generated [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_y.u", \
"Connector of Real input signal [W]", "regenPMSM.eRegen.inverter.addAbs.add.y", 1,\
 5, 1176, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_y.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.gain.u", 1, 5,\
 1169, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_y.absActive", \
"If true, then y = abs(u), if not y = u [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_y.abs.u", \
"Connector of Real input signal [W]", "regenPMSM.eRegen.inverter.addAbs.add.y", 1,\
 5, 1176, 0)
DeclareAlias2("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_y.abs.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.inverter.gain.u", 1, 5,\
 1169, 0)
DeclareVariable("regenPMSM.eRegen.inverter.addAbs.conditionalAbs_y.abs.generateEvent",\
 "Choose whether events shall be generated [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.u", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 0)
DeclareVariable("regenPMSM.eRegen.machine.useSupport", "true: stator is able to rotate, false: stator is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.useThermalPort", "true: thermal connector is provided, false: temperature is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.machine.pin_p.v", "Potential at the pin [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.pin_p.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085, 132)
DeclareVariable("regenPMSM.eRegen.machine.pin_n.v", "Potential at the pin [V]", \
0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.machine.pin_n.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 132)
DeclareAlias2("regenPMSM.eRegen.machine.flange.phi", "Absolute rotation angle of flange [rad|deg]",\
 "flywheel2_1.flywheel.phi", 1, 5, 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.flange.tau", "Cut torque in the flange [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 132)
DeclareAlias2("regenPMSM.eRegen.machine.desiredTorque", "[N.m]", \
"regenPMSM.eRegen.controller.setTorque", 1, 5, 1049, 0)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.pc.v", "Potential at the pin [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.pc.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085, 132)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.nc.v", "Potential at the pin [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.nc.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 132)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.pv.v", "Potential at the pin [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.pv.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.nv.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.nv.i", \
"Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.power", \
"Instantaneous power as output signal [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.voltageSensor.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.voltageSensor.p.i", \
"Current flowing into the pin [A]", 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.voltageSensor.n.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("regenPMSM.eRegen.machine.electricPowerDC.voltageSensor.n.i", \
"Current flowing into the pin [A]", 0.0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.voltageSensor.v", \
"Voltage between pin p and n (= p.v - n.v) as output signal [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.currentSensor.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.currentSensor.p.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.currentSensor.n.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.currentSensor.n.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.currentSensor.i", \
"Current in the branch from p to n as output signal [A]", "regenPMSM.eRegen.inverter.p2.i", -1,\
 5, 1085, 0)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.product.u1", \
"Connector of Real input signal 1 [V]", "simplePower.constantVoltage.V", 1, 7, 7655,\
 0)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.product.u2", \
"Connector of Real input signal 2 [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5,\
 1085, 0)
DeclareAlias2("regenPMSM.eRegen.machine.electricPowerDC.product.y", \
"Connector of Real output signal [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 0)
DeclareAlias2("regenPMSM.eRegen.machine.torqueSensor.flange_a.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.torqueSensor.flange_a.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 132)
DeclareAlias2("regenPMSM.eRegen.machine.torqueSensor.flange_b.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.torqueSensor.flange_b.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.flange.tau", -1, 5, 1046, 132)
DeclareAlias2("regenPMSM.eRegen.machine.torqueSensor.tau", "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 0)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.u", "Electric power of the machine [W]",\
 "regenPMSM.eRegen.machine.electricPowerDC.power", 1, 5, 1191, 0)
DeclareVariable("regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", \
"Current min available torque [N.m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.u", \
"Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 0)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.u", "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 0)
DeclareVariable("regenPMSM.eRegen.machine.toBus_innerTorque.u", "Electrical torque inside the machine [N.m]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.machine.toBus_mechanicPower.u", \
"Mechanic power at the machine's shaft [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("regenPMSM.eRegen.machine.fixed.phi0", "Fixed offset angle of housing [rad|deg]",\
 7901, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.machine.fixed.flange.phi", "Absolute rotation angle of flange [rad|deg]",\
 "regenPMSM.eRegen.machine.fixed.phi0", 1, 7, 7901, 4)
DeclareVariable("regenPMSM.eRegen.machine.fixed.flange.tau", "Cut torque in the flange [N.m]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.machine.internalSupport.phi", "Absolute rotation angle of flange [rad|deg]",\
 "regenPMSM.eRegen.machine.fixed.phi0", 1, 7, 7901, 1028)
DeclareVariable("regenPMSM.eRegen.machine.internalSupport.tau", "Cut torque in the flange [N.m]",\
 0.0, 0.0,0.0,0.0,0,2825)
DeclareAlias2("regenPMSM.eRegen.machine.angleSensor.flange_a.phi", \
"Absolute rotation angle of flange [rad|deg]", "regenPMSM.eRegen.machine.fixed.phi0", 1,\
 7, 7901, 4)
DeclareVariable("regenPMSM.eRegen.machine.angleSensor.flange_a.tau", \
"Cut torque in the flange [N.m]", 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.machine.angleSensor.flange_b.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareVariable("regenPMSM.eRegen.machine.angleSensor.flange_b.tau", \
"Cut torque in the flange [N.m]", 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.machine.angleSensor.phi_rel", "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.speedSensor.flange_a.phi", \
"Absolute rotation angle of flange [rad|deg]", "regenPMSM.eRegen.machine.fixed.phi0", 1,\
 7, 7901, 4)
DeclareVariable("regenPMSM.eRegen.machine.speedSensor.flange_a.tau", \
"Cut torque in the flange [N.m]", 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.machine.speedSensor.flange_b.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareVariable("regenPMSM.eRegen.machine.speedSensor.flange_b.tau", \
"Cut torque in the flange [N.m]", 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.machine.speedSensor.phi_rel", "Relative angle between two flanges (flange_b.phi - flange_a.phi) [rad|deg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.speedSensor.der(phi_rel)", \
"der(Relative angle between two flanges (flange_b.phi - flange_a.phi)) [rad/s]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.speedSensor.w_rel", "Relative angular velocity between two flanges (= der(flange_b.phi) - der(flange_a.phi)) as output signal [rad/s]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.u", "Mechanic rotational speed of machine's shaft [rad/s|1/min]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.u", "Mechanic angle of machine's shaft [rad|deg]",\
 "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1, 5, 1202, 0)
DeclareVariable("regenPMSM.eRegen.machine.useVoltageGuess", "Use start value for iteration during initialization (setting 'start' with 'fixed=false') [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.V_guess", "Start value for iteration during initialization [V]",\
 7902, 400, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.machine.data.J_r", "Ineratia of the machine's rotor [kg.m2]",\
 7903, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.data.enableFirstOrder", \
"Use a first order element to approximate the behaviour of the stator current and hence the inner torque [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.data.T", "Time constant of the first order element [s]",\
 7904, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.machine.data.enableTorqueLimitation", \
"false: Torque limits will be set to inf [:#(type=Boolean)]", 7905, true, \
0.0,0.0,0.0,0,562)
DeclareVariable("regenPMSM.eRegen.machine.data.P_max", "Maximium power provided by the machine (above nominal speed) [W]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.data.tau_max", "Maximum torque provided by the machine (up to nominal speed) [N.m]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.data.useSupport", "true: stator is able to rotate, false: stator is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.data.useThermalPort", "true: thermal connector is provided, false: temperature is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.data.eta", "Total efficiency [1]", 7906,\
 1, 0.0,1E+100,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.data.variablePower", "Set power by parameter (true) or real input (false) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.data.P_constant", "Desired power: postive is consumed, negative is generated [W]",\
 7907, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.data.V_min", "For lower voltages, power will be limited [V]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.data.V_max", "For higher voltages, power will be limited [V]",\
 100000.0, 0.0,1E+100,0.0,0,513)
DeclareParameter("regenPMSM.eRegen.machine.data.I_max", "Maximum possible DC current (-I_max < I < I_max) [A]",\
 7908, 100000.0, 0.0,1E+100,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.data.actionLim", "Optionally warn or stop when power is limited [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.data.actionDiv0", "Optionally warn or stop when preventing divisions by zero [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.data.V_eps", "Threshold for minimum voltage, values between +eps/-eps will be treated as eps [V]",\
 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.data.useDynamics", "Use PT1 dynamics to filter the load's demanded power [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.data.T_PT1", "Time constant of optional PT1 [s]",\
 7909, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.machine.data.initType", "Type of initialization (1: no init, 2: steady state, 3/4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 7910, 1, 1.0,4.0,0.0,0,564)
DeclareParameter("regenPMSM.eRegen.machine.data.initialCurrent", \
"Initial current through the power source [A]", 7911, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.J_r", "Ineratia of the machine's rotor [kg.m2]",\
 0.05, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.enableFirstOrder", \
"Use a first order element to approximate the behaviour of the stator current and hence the inner torque [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.T", "Time constant of the first order element [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.enableTorqueLimitation", \
"false: Torque limits will be set to inf [:#(type=Boolean)]", false, 0.0,0.0,0.0,\
0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.P_max", "Maximium power provided by the machine (above nominal speed) [W]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.tau_max", "Maximum torque provided by the machine (up to nominal speed) [N.m]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.useSupport", \
"true: stator is able to rotate, false: stator is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.useThermalPort", \
"true: thermal connector is provided, false: temperature is fixed internally [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.eta", "Total efficiency [1]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.variablePower", \
"Set power by parameter (true) or real input (false) [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.P_constant", \
"Desired power: postive is consumed, negative is generated [W]", 7912, 1, \
0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.V_min", "For lower voltages, power will be limited [V]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.V_max", "For higher voltages, power will be limited [V]",\
 100000.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.I_max", "Maximum possible DC current (-I_max < I < I_max) [A]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.actionLim", \
"Optionally warn or stop when power is limited [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.actionDiv0", \
"Optionally warn or stop when preventing divisions by zero [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.V_eps", "Threshold for minimum voltage, values between +eps/-eps will be treated as eps [V]",\
 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.useDynamics", \
"Use PT1 dynamics to filter the load's demanded power [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.T_PT1", "Time constant of optional PT1 [s]",\
 7913, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.initType", \
"Type of initialization (1: no init, 2: steady state, 3/4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 7914, 1, 1.0,4.0,0.0,0,564)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.initialCurrent", \
"Initial current through the power source [A]", 7915, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.useVoltageGuess", \
"Use start value for iteration during initialization (setting 'start' with 'fixed=false') [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.V_guess", "Start value for iteration during initialization [V]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.pin_p.v", "Potential at the pin [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.pin_p.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085, 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.pin_n.v", "Potential at the pin [V]",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.pin_n.i", "Current flowing into the pin [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 132)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.flange.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.flange.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 132)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.desiredTorque", "[N.m]", \
"regenPMSM.eRegen.controller.setTorque", 1, 5, 1049, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.P_el", "Electric power of drive as output signal [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.P_mec", "Mechanic power of drive as output signal [W]",\
 "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1, 5, 1197, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.speed", "Speed of drive as output signal [rad/s|1/min]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.innerTorque", \
"Inner torque of drive as output signal [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.minAvailableTorque", \
"minimum available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.maxAvailableTorque", \
"maximum available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.desiredTorque",\
 "[N.m]", "regenPMSM.eRegen.controller.setTorque", 1, 5, 1049, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.speed", \
"[rad/s|1/min]", "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.setTorque",\
 "[N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1, 5, 1196, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.maximumTorque",\
 "[N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1, 5, 1195, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.minimumTorque",\
 "[N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1, 5, 1195, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.enableTorqueLimitation",\
 "false: Torque limits will be set to inf [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.P_max",\
 "Maximium power provided by the machine (above nominal speed) [W]", 0.0, 0.0,\
1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.tau_max",\
 "Maximum torque provided by the machine (up to nominal speed) [N.m]", 0.0, 0.0,\
1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.characteristicSpeed",\
 "[rad/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.limitDesiredTorque.actualTorque",\
 "[N.m]", 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.torque.useSupport", \
"= true, if support flange enabled, otherwise implicitly grounded [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.torque.flange.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.torque.flange.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", -1,\
 5, 1196, 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.torque.phi_support", \
"Absolute angle of support flange [rad|deg]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.torque.tau", \
"Accelerating torque acting at flange (= -flange.tau) [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.flange_a.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.flange_a.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 132)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.flange_b.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.flange_b.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.rotorInertia.J", \
"Moment of inertia [kg.m2]", 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.rotorInertia.stateSelect",\
 "Priority to use phi and w as states [:#(type=StateSelect)]", 3, 1.0,5.0,0.0,0,1541)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.phi", \
"Absolute rotation angle of component [rad|deg]", "flywheel2_1.flywheel.phi", 1,\
 5, 666, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.der(phi)", \
"der(Absolute rotation angle of component) [rad/s]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.w", \
"Absolute angular velocity of component (= der(phi)) [rad/s]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.der(w)", \
"der(Absolute angular velocity of component (= der(phi))) [rad/s2]", \
"flywheel2_1.flywheel.der(w)", 1, 5, 668, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.rotorInertia.a", \
"Absolute angular acceleration of component (= der(w)) [rad/s2]", \
"flywheel2_1.flywheel.der(w)", 1, 5, 668, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.noFirstOrder.u", \
"Connector of Real input signal [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.noFirstOrder.y", \
"Connector of Real output signal [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.flange_a.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.flange_a.der(phi)",\
 "der(Absolute rotation angle of flange) [rad/s]", "flywheel2_1.flywheel.w", 1, 5,\
 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.flange_a.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 132)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.flange_b.phi", \
"Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.flange_b.tau", \
"Cut torque in the flange [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", -1,\
 5, 1196, 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.multiSensor.power", \
"Power in flange flange_a as output signal [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.w", \
"Absolute angular velocity of flange_a as output signal [rad/s]", \
"flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.multiSensor.tau", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1, 5, 1196, 0)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.signChange.k", \
"Gain value multiplied with input signal [1]", 7916, -1, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.signChange.u", \
"Input signal connector [W]", "regenPMSM.eRegen.machine.coreElement.multiSensor.power", 1,\
 5, 1249, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.signChange.y", \
"Output signal connector [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 0)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.fixed.phi0", \
"Fixed offset angle of housing [rad|deg]", 7917, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.fixed.flange.phi", \
"Absolute rotation angle of flange [rad|deg]", "regenPMSM.eRegen.machine.coreElement.fixed.phi0", 1,\
 7, 7917, 4)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.fixed.flange.tau", \
"Cut torque in the flange [N.m]", 0.0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.flange_a.phi",\
 "Absolute rotation angle of flange [rad|deg]", "regenPMSM.eRegen.machine.coreElement.fixed.phi0", 1,\
 7, 7917, 4)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.flange_a.tau",\
 "Cut torque in the flange [N.m]", 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.flange_b.phi",\
 "Absolute rotation angle of flange [rad|deg]", "flywheel2_1.flywheel.phi", 1, 5,\
 666, 4)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.flange_b.tau",\
 "Cut torque in the flange [N.m]", 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.phi_rel", \
"Relative angle between two flanges (flange_b.phi - flange_a.phi) [rad|deg]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.der(phi_rel)",\
 "der(Relative angle between two flanges (flange_b.phi - flange_a.phi)) [rad/s]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.relSpeedSensor.w_rel", \
"Relative angular velocity between two flanges (= der(flange_b.phi) - der(flange_a.phi)) as output signal [rad/s]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.P_actual",\
 "Instantaneous power [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.i", \
"Current through the load [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_limit",\
 "Instantaneous current limit [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_des",\
 "Instantaneous current limit [A]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.v", \
"Voltage drop of the two pins (= p.v - n.v) [V]", "simplePower.constantVoltage.V", 1,\
 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.p.v", \
"Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.p.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.n.v", \
"Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.n.i", \
"Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.variablePower",\
 "Set power by parameter (true) or real input (false) [:#(type=Boolean)]", true,\
 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.P_constant",\
 "Desired power: postive is consumed, negative is generated [W]", 1, 0.0,0.0,0.0,\
0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.V_min",\
 "For lower voltages, power will be limited [V]", 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.V_max",\
 "For higher voltages, power will be limited [V]", 100000.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.I_max",\
 "Maximum possible DC current (-I_max < I < I_max) [A]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.actionLim",\
 "Optionally warn or stop when power is limited [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.actionDiv0",\
 "Optionally warn or stop when preventing divisions by zero [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.V_eps",\
 "Threshold for minimum voltage, values between +eps/-eps will be treated as eps [V]",\
 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.useDynamics",\
 "Use PT1 dynamics to filter the load's demanded power [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.T_PT1",\
 "Time constant of optional PT1 [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.initType",\
 "Type of initialization (1: no init, 2: steady state, 3/4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.initialCurrent",\
 "Initial current through the power source [A]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.useVoltageGuess",\
 "Use start value for iteration during initialization (setting 'start' with 'fixed=false') [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.V_guess",\
 "Start value for iteration during initialization [V]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.P_variable",\
 "Desired power input, postive is consumed, negative is generated power [W]", \
"regenPMSM.eRegen.machine.coreElement.P_el", 1, 5, 1239, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.divNoZero.u1",\
 "Connector of Real input signal 1 [W]", "regenPMSM.eRegen.machine.coreElement.P_el", 1,\
 5, 1239, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.divNoZero.u2",\
 "Connector of Real input signal 2 [V]", "simplePower.constantVoltage.V", 1, 7, 7655,\
 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.divNoZero.y",\
 "Connector of Real output signal [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_des", 1,\
 5, 1256, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.divNoZero.eps",\
 "Smallest value used for division [V]", 0.1, 1E-60,1E+100,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.divNoZero.considerSign",\
 "True: sign is considered in case of 'b' < 'eps' [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.divNoZero.action",\
 "Optionally inform about divisions by zero with asserts [:#(type=DymolaModels.Blocks.Choices.AssertActions)]",\
 3, 1.0,3.0,0.0,0,517)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.signalCurrent.p.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.signalCurrent.p.i",\
 "Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 132)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.signalCurrent.n.v",\
 "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.signalCurrent.n.i",\
 "Current flowing into the pin [A]", "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085,\
 132)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.signalCurrent.v",\
 "Voltage drop between the two pins (= p.v - n.v) [V]", "simplePower.constantVoltage.V", 1,\
 7, 7655, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.signalCurrent.i",\
 "Current flowing from pin p to pin n as input signal [A]", "regenPMSM.eRegen.inverter.p2.i", -1,\
 5, 1085, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.desiredPower.y",\
 "Connector of Real output signal [W]", "regenPMSM.eRegen.machine.coreElement.P_el", 1,\
 5, 1239, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.desiredPower.variableOutput",\
 "If true the input signal u is used as output, otherwise the parameter p [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.desiredPower.p",\
 "Constant output value [W]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.desiredPower.u",\
 "Variable output value [W]", "regenPMSM.eRegen.machine.coreElement.P_el", 1, 5,\
 1239, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.u",\
 "Connector of Real input signal [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_des", 1,\
 5, 1256, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.y",\
 "Connector of Real output signal [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5,\
 1085, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.strict",\
 "= true, if strict limits with noEvent(..) [:#(type=Boolean)]", true, 0.0,0.0,\
0.0,0,515)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.homotopyType",\
 "Simplified model for homotopy-based initialization [:#(type=Modelica.Blocks.Types.VariableLimiterHomotopy)]",\
 2, 1.0,3.0,0.0,0,517)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.ySimplified",\
 "Fixed value of output in simplified model [A]", 7918, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.limit",\
 "Value used for maximum and minimum of input u [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_limit", 1,\
 5, 1255, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.limit1",\
 "Upper limit [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.limit2",\
 "Lower limit [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.currentLimiter.simplifiedExpr",\
 "Simplified expression for homotopy-based initialization [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_des", 1,\
 5, 1256, 1024)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.positiveVoltage.u",\
 "Connector of Real input signal [V]", "simplePower.constantVoltage.V", 1, 7, 7655,\
 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.positiveVoltage.y",\
 "Connector of Real output signal [V]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.positiveVoltage.generateEvent",\
 "Choose whether events shall be generated [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.u",\
 "Connector of Real input signal [V]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.positiveVoltage.y", 1,\
 5, 1282, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.y",\
 "Connector of Real output signal [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.u1",\
 "Lower boundary of input u, switching from constant value y1 to sin^2 interpolation [V]",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.u2",\
 "Upper boundary of input u, switching from sin^2 interpolation to constant value y2 [V]",\
 1, 0.0,0.0,0.0,0,513)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.y1",\
 "Minimum value for y [A]", 7919, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.y2",\
 "Maximum value for y [A]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.u",\
 "Connector of Real input signal [V]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.positiveVoltage.y", 1,\
 5, 1282, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.y",\
 "Connector of Real output signal [A]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.u1",\
 "Lower boundary of input u, switching from constant value y1 to sin^2 interpolation [V]",\
 100000.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.u2",\
 "Upper boundary of input u, switching from sin^2 interpolation to constant value y2 [V]",\
 110000.00000000001, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.y1",\
 "Minimum value for y [A]", 0, 0.0,0.0,0.0,0,513)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.y2",\
 "Maximum value for y [A]", 7920, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageLimit.u1",\
 "Connector of Real input signal 1 [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_minV.y", 1,\
 5, 1284, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageLimit.u2",\
 "Connector of Real input signal 2 [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.limI_maxV.y", 1,\
 5, 1288, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageLimit.y",\
 "Connector of Real output signal [A]", "regenPMSM.eRegen.machine.coreElement.electricPowerSource.i_limit", 1,\
 5, 1255, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.noFirstOrder.u",\
 "Connector of Real input signal [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5, 1085,\
 1024)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.noFirstOrder.y",\
 "Connector of Real output signal [A]", "regenPMSM.eRegen.inverter.p2.i", -1, 5,\
 1085, 1024)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageSensor.p.v",\
 "Potential at the pin [V]", "simplePower.constantVoltage.V", 1, 7, 7655, 1028)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageSensor.p.i",\
 "Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,2825)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageSensor.n.v",\
 "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageSensor.n.i",\
 "Current flowing into the pin [A]", 0, 0.0,0.0,0.0,0,2825)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.electricPowerSource.voltageSensor.v",\
 "Voltage between pin p and n (= p.v - n.v) as output signal [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 1024)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.internalSupport.phi", \
"Absolute rotation angle of flange [rad|deg]", "regenPMSM.eRegen.machine.coreElement.fixed.phi0", 1,\
 7, 7917, 1028)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.internalSupport.tau", \
"Cut torque in the flange [N.m]", 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.compute_P_el.eta", \
"Efficiency [1]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.resultingPower.u1",\
 "Connector of Real input signal 1 [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 0)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.compute_P_el.resultingPower.u2",\
 "Connector of Real input signal 2 [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.resultingPower.y",\
 "Connector of Real output signal [W]", "regenPMSM.eRegen.machine.coreElement.P_el", 1,\
 5, 1239, 0)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.compute_P_el.resultingPower.k1",\
 "Gain of input signal 1 [1]", 7921, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.machine.coreElement.compute_P_el.resultingPower.k2",\
 "Gain of input signal 2 [1]", 7922, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.compute_P_el.losses.k", \
"Gain value multiplied with input signal [1]", 1, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.machine.coreElement.compute_P_el.losses.u", \
"Input signal connector [W]", 0, 0.0,0.0,0.0,0,576)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.losses.y", \
"Output signal connector [W]", "regenPMSM.eRegen.machine.coreElement.compute_P_el.resultingPower.u2", 1,\
 5, 1297, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.providedPower.u1",\
 "Connector of Real input signal 1 [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.providedPower.u2",\
 "Connector of Real input signal 2 [W]", "regenPMSM.eRegen.machine.coreElement.P_el", 1,\
 5, 1239, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.providedPower.y",\
 "Connector of Real output signal [W]", "regenPMSM.eRegen.machine.coreElement.compute_P_el.losses.u", 1,\
 5, 1299, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.u", "[W]", \
"regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1, 5, 1197, 0)
DeclareAlias2("regenPMSM.eRegen.machine.coreElement.compute_P_el.y", "[W]", \
"regenPMSM.eRegen.machine.coreElement.P_el", 1, 5, 1239, 0)
DeclareAlias2("regenPMSM.eRegen.speedSensor.flange.phi", "Absolute rotation angle of flange [rad|deg]",\
 "flywheel2_1.flywheel.phi", 1, 5, 666, 4)
DeclareAlias2("regenPMSM.eRegen.speedSensor.flange.der(phi)", "der(Absolute rotation angle of flange) [rad/s]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 4)
DeclareVariable("regenPMSM.eRegen.speedSensor.flange.tau", "Cut torque in the flange [N.m]",\
 0, 0.0,0.0,0.0,0,777)
DeclareAlias2("regenPMSM.eRegen.speedSensor.w", "Absolute angular velocity of flange as output signal [rad/s]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 0)
DeclareParameter("regenPMSM.const.k", "Constant output value", 7923, 0, 0.0,0.0,\
0.0,0,560)
DeclareAlias2("regenPMSM.const.y", "Connector of Real output signal", \
"regenPMSM.const.k", 1, 7, 7923, 0)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.k", \
"Integrator gain [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.use_reset",\
 "=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.use_set", \
"=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.initType", \
"Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.y_start", \
"Initial or guess value of output (= state)", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.u", \
"Connector of Real input signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("partial_PMSM.eTraction.controller.coreElement.PID.I.y", \
"Connector of Real output signal", 5, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("partial_PMSM.eTraction.controller.coreElement.PID.I.der(y)", \
"der(Connector of Real output signal)", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.local_reset",\
 "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.I.local_set",\
 "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("partial_PMSM.eTraction.controller.coreElement.PID.addI.k1", \
"Gain of input signal 1", 7924, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("partial_PMSM.eTraction.controller.coreElement.PID.addI.k2", \
"Gain of input signal 2", 7925, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("partial_PMSM.eTraction.controller.coreElement.PID.addI.k3", \
"Gain of input signal 3", 7926, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.addI.u1", \
"Connector of Real input signal 1 [rad/s]", "partial_PMSM.eTraction.desiredSpeed", 1,\
 5, 122, 0)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.addI.u2", \
"Connector of Real input signal 2 [rad/s]", "partial_Chassis.inertia.w", 1, 5, 86,\
 0)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.addI.u3", \
"Connector of Real input signal 3", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.addI.y", \
"Connector of Real output signal", "partial_PMSM.eTraction.controller.coreElement.PID.I.u", 1,\
 5, 1306, 0)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.addSat.u1", \
"Connector of Real input signal 1 [N.m]", "partial_PMSM.eTraction.controller.setTorque", 1,\
 5, 123, 0)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.addSat.u2", \
"Connector of Real input signal 2 [N.m]", "partial_PMSM.eTraction.controller.coreElement.PID.limiter.u", 1,\
 5, 153, 0)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.addSat.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("partial_PMSM.eTraction.controller.coreElement.PID.addSat.k1", \
"Gain of input signal 1", 7927, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("partial_PMSM.eTraction.controller.coreElement.PID.addSat.k2", \
"Gain of input signal 2", 7928, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("partial_PMSM.eTraction.controller.coreElement.PID.gainTrack.k",\
 "Gain value multiplied with input signal [1]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.gainTrack.u", \
"Input signal connector", "partial_PMSM.eTraction.controller.coreElement.PID.addSat.y", 1,\
 5, 1310, 0)
DeclareAlias2("partial_PMSM.eTraction.controller.coreElement.PID.gainTrack.y", \
"Output signal connector", "partial_PMSM.eTraction.controller.coreElement.PID.addI.u3", 1,\
 5, 1309, 0)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.k", \
"Integrator gain [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.use_reset", \
"=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.use_set", \
"=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.initType", \
"Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.y_start", \
"Initial or guess value of output (= state)", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.u", \
"Connector of Real input signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("partial_PMSM.eRegen.controller.coreElement.PID.I.y", \
"Connector of Real output signal", 6, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("partial_PMSM.eRegen.controller.coreElement.PID.I.der(y)", \
"der(Connector of Real output signal)", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.local_reset", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.I.local_set", "",\
 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("partial_PMSM.eRegen.controller.coreElement.PID.addI.k1", \
"Gain of input signal 1", 7929, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("partial_PMSM.eRegen.controller.coreElement.PID.addI.k2", \
"Gain of input signal 2", 7930, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("partial_PMSM.eRegen.controller.coreElement.PID.addI.k3", \
"Gain of input signal 3", 7931, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.addI.u1", \
"Connector of Real input signal 1 [rad/s]", "partial_PMSM.motorSwitch.regenReference", 1,\
 5, 378, 0)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.addI.u2", \
"Connector of Real input signal 2 [rad/s]", "partial_Chassis.inertia.w", 1, 5, 86,\
 0)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.addI.u3", \
"Connector of Real input signal 3", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.addI.y", \
"Connector of Real output signal", "partial_PMSM.eRegen.controller.coreElement.PID.I.u", 1,\
 5, 1317, 0)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.addSat.u1", \
"Connector of Real input signal 1 [N.m]", "partial_PMSM.eRegen.controller.setTorque", 1,\
 5, 405, 0)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.addSat.u2", \
"Connector of Real input signal 2 [N.m]", "partial_PMSM.eRegen.controller.coreElement.PID.limiter.u", 1,\
 5, 435, 0)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.addSat.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("partial_PMSM.eRegen.controller.coreElement.PID.addSat.k1", \
"Gain of input signal 1", 7932, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("partial_PMSM.eRegen.controller.coreElement.PID.addSat.k2", \
"Gain of input signal 2", 7933, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("partial_PMSM.eRegen.controller.coreElement.PID.gainTrack.k", \
"Gain value multiplied with input signal [1]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.gainTrack.u", \
"Input signal connector", "partial_PMSM.eRegen.controller.coreElement.PID.addSat.y", 1,\
 5, 1321, 0)
DeclareAlias2("partial_PMSM.eRegen.controller.coreElement.PID.gainTrack.y", \
"Output signal connector", "partial_PMSM.eRegen.controller.coreElement.PID.addI.u3", 1,\
 5, 1320, 0)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.k", \
"Integrator gain [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.use_reset", \
"=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.use_set", \
"=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.initType", \
"Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.y_start", \
"Initial or guess value of output (= state)", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.u", \
"Connector of Real input signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("regenPMSM.eTraction.controller.coreElement.PID.I.y", \
"Connector of Real output signal", 7, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("regenPMSM.eTraction.controller.coreElement.PID.I.der(y)", \
"der(Connector of Real output signal)", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.local_reset", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.I.local_set", "",\
 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("regenPMSM.eTraction.controller.coreElement.PID.addI.k1", \
"Gain of input signal 1", 7934, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eTraction.controller.coreElement.PID.addI.k2", \
"Gain of input signal 2", 7935, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eTraction.controller.coreElement.PID.addI.k3", \
"Gain of input signal 3", 7936, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.addI.u1", \
"Connector of Real input signal 1 [rad/s]", "regenPMSM.eTraction.desiredSpeed", 1,\
 5, 767, 0)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.addI.u2", \
"Connector of Real input signal 2 [rad/s]", "flywheel2_1.flywheel.w", 1, 5, 667,\
 0)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.addI.u3", \
"Connector of Real input signal 3", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.addI.y", \
"Connector of Real output signal", "regenPMSM.eTraction.controller.coreElement.PID.I.u", 1,\
 5, 1328, 0)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.addSat.u1", \
"Connector of Real input signal 1 [N.m]", "regenPMSM.eTraction.controller.setTorque", 1,\
 5, 768, 0)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.addSat.u2", \
"Connector of Real input signal 2 [N.m]", "regenPMSM.eTraction.controller.coreElement.PID.limiter.u", 1,\
 5, 798, 0)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.addSat.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("regenPMSM.eTraction.controller.coreElement.PID.addSat.k1", \
"Gain of input signal 1", 7937, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eTraction.controller.coreElement.PID.addSat.k2", \
"Gain of input signal 2", 7938, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eTraction.controller.coreElement.PID.gainTrack.k", \
"Gain value multiplied with input signal [1]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.gainTrack.u", \
"Input signal connector", "regenPMSM.eTraction.controller.coreElement.PID.addSat.y", 1,\
 5, 1332, 0)
DeclareAlias2("regenPMSM.eTraction.controller.coreElement.PID.gainTrack.y", \
"Output signal connector", "regenPMSM.eTraction.controller.coreElement.PID.addI.u3", 1,\
 5, 1331, 0)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.k", \
"Integrator gain [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.use_reset", \
"=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.use_set", \
"=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.initType", \
"Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.y_start", \
"Initial or guess value of output (= state)", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.u", \
"Connector of Real input signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("regenPMSM.eRegen.controller.coreElement.PID.I.y", "Connector of Real output signal",\
 8, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("regenPMSM.eRegen.controller.coreElement.PID.I.der(y)", \
"der(Connector of Real output signal)", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.local_reset", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.I.local_set", "", 0,\
 0.0,0.0,0.0,0,1537)
DeclareParameter("regenPMSM.eRegen.controller.coreElement.PID.addI.k1", \
"Gain of input signal 1", 7939, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.controller.coreElement.PID.addI.k2", \
"Gain of input signal 2", 7940, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.controller.coreElement.PID.addI.k3", \
"Gain of input signal 3", 7941, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addI.u1", \
"Connector of Real input signal 1 [rad/s]", "regenPMSM.motorSwitch.regenReference", 1,\
 5, 1023, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addI.u2", \
"Connector of Real input signal 2 [rad/s]", "flywheel2_1.flywheel.w", 1, 5, 667,\
 0)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.addI.u3", \
"Connector of Real input signal 3", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addI.y", \
"Connector of Real output signal", "regenPMSM.eRegen.controller.coreElement.PID.I.u", 1,\
 5, 1339, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addSat.u1", \
"Connector of Real input signal 1 [N.m]", "regenPMSM.eRegen.controller.setTorque", 1,\
 5, 1049, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.addSat.u2", \
"Connector of Real input signal 2 [N.m]", "regenPMSM.eRegen.controller.coreElement.PID.limiter.u", 1,\
 5, 1079, 0)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.addSat.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("regenPMSM.eRegen.controller.coreElement.PID.addSat.k1", \
"Gain of input signal 1", 7942, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("regenPMSM.eRegen.controller.coreElement.PID.addSat.k2", \
"Gain of input signal 2", 7943, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("regenPMSM.eRegen.controller.coreElement.PID.gainTrack.k", \
"Gain value multiplied with input signal [1]", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.gainTrack.u", \
"Input signal connector", "regenPMSM.eRegen.controller.coreElement.PID.addSat.y", 1,\
 5, 1343, 0)
DeclareAlias2("regenPMSM.eRegen.controller.coreElement.PID.gainTrack.y", \
"Output signal connector", "regenPMSM.eRegen.controller.coreElement.PID.addI.u3", 1,\
 5, 1342, 0)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.currentDC", "DC current of the inverter [A]",\
 "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.maxAvailableTorque", \
"Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.minAvailableTorque", \
"Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.powerAC", "AC Power of the inverter [W]",\
 "partial_PMSM.eRegen.inverter.product2.y", 1, 5, 450, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.powerDC", "DC Power of the inverter [W]",\
 "partial_PMSM.eRegen.inverter.product1.y", 1, 5, 446, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.electricDriveBus.voltageDC", "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_electricPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eRegen.inverter.p2.i", 1, 5, 441, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eRegenPowerSensor.pc.i", 1, 5, 391,\
 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 547, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 552, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eRegen.inverter.gain.u", 1,\
 5, 525, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 553, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 551, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eRegen.flange.tau", 1, 5, 402, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product2.y", 1, 5,\
 450, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eRegen.inverter.product1.y", 1, 5,\
 446, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 558, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.maxAvailableTorque", \
"Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.minAvailableTorque", \
"Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_electricPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 86, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"partial_PMSM.eTraction.inverter.p2.i", 1, 5, 159, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "partial_PMSM.eTraction.pin_p.i", 1, 5, 119, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "partial_PMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 265, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "partial_PMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 270, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "partial_PMSM.eTraction.inverter.gain.u", 1,\
 5, 243, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "partial_PMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 271, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "partial_PMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 269, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "partial_PMSM.eTraction.flange.tau", 1, 5, 118, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product2.y", 1,\
 5, 168, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "partial_PMSM.eTraction.inverter.product1.y", 1,\
 5, 164, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "partial_PMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 276, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("partial_PMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.currentAC_EA", "AC current of the inverter used for energy analysis (EA) models [A]",\
 "regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.currentDC", "DC current of the inverter [A]",\
 "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.innerTorque", "Electrical torque inside the machine [N.m]",\
 "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1, 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.maxAvailableTorque", \
"Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.minAvailableTorque", \
"Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.outerTorque", "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.powerAC", "AC Power of the inverter [W]",\
 "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.powerDC", "DC Power of the inverter [W]",\
 "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.rotorAngle", "Mechanic angle of machine's shaft [rad|deg]",\
 "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1, 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.rotorSpeed", "Mechanic rotational speed of machine's shaft [rad/s|1/min]",\
 "flywheel2_1.flywheel.w", 1, 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.voltageAC_EA", "AC voltage of the inverter used for energy analysis (EA) models [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.electricDriveBus.voltageDC", "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.maxAvailableTorque", \
"Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.minAvailableTorque", \
"Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_currentAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerAC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterPowerDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_lossesInverter.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.inverter.toBus_voltageAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.maxAvailableTorque", \
"Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.minAvailableTorque", \
"Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_electricPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_innerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_maxAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_mechanicPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_minAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_outerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftAngle.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eRegen.inverter.p2.i", 1, 5, 1085, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eRegenPowerSensor.pc.i", 1, 5, 1036,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eRegen.machine.electricPowerDC.power", 1,\
 5, 1191, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eRegen.machine.toBus_innerTorque.u", 1,\
 5, 1196, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eRegen.inverter.gain.u", 1,\
 5, 1169, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", -1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eRegen.machine.toBus_mechanicPower.u", 1,\
 5, 1197, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eRegen.machine.toBus_minAvailableTorque.u", 1,\
 5, 1195, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eRegen.flange.tau", 1, 5, 1046, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product2.y", 1, 5, 1094,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eRegen.inverter.product1.y", 1, 5, 1090,\
 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eRegen.machine.angleSensor.phi_rel", 1,\
 5, 1202, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eRegen.machine.toBus_shaftSpeed.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.currentDC", "DC current of the inverter [A]",\
 "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.maxAvailableTorque", \
"Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.minAvailableTorque", \
"Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.powerAC", "AC Power of the inverter [W]",\
 "regenPMSM.eTraction.inverter.product2.y", 1, 5, 813, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.powerDC", "DC Power of the inverter [W]",\
 "regenPMSM.eTraction.inverter.product1.y", 1, 5, 809, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.electricDriveBus.voltageDC", "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_currentAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterCurrentDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerAC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterPowerDC.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_inverterVoltageDC.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_lossesInverter.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.inverter.toBus_voltageAC_EA.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.currentAC_EA", \
"AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.currentDC", \
"DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.electricPower", \
"Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.lossesInverter", \
"Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.mechanicPower", \
"Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.powerAC", \
"AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.powerDC", \
"DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.voltageAC_EA", \
"AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.electricDriveBus.voltageDC", \
"DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_electricPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_innerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_maxAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_mechanicPower.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_minAvailableTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_outerTorque.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "flywheel2_1.flywheel.w", 1,\
 5, 667, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftAngle.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.currentAC_EA",\
 "AC current of the inverter used for energy analysis (EA) models [A]", \
"regenPMSM.eTraction.inverter.p2.i", 1, 5, 804, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.currentDC",\
 "DC current of the inverter [A]", "regenPMSM.eTraction.pin_p.i", 1, 5, 764, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.electricPower",\
 "Electric power of the machine [W]", "regenPMSM.eTraction.machine.electricPowerDC.power", 1,\
 5, 910, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "regenPMSM.eTraction.machine.toBus_innerTorque.u", 1,\
 5, 915, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.lossesInverter",\
 "Sum of Diode and Switch losses: Inverter losses [W]", "regenPMSM.eTraction.inverter.gain.u", 1,\
 5, 888, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.maxAvailableTorque",\
 "Current max available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", -1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.mechanicPower",\
 "Mechanic power at the machine's shaft [W]", "regenPMSM.eTraction.machine.toBus_mechanicPower.u", 1,\
 5, 916, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.minAvailableTorque",\
 "Current min available torque [N.m]", "regenPMSM.eTraction.machine.toBus_minAvailableTorque.u", 1,\
 5, 914, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "regenPMSM.eTraction.flange.tau", 1, 5, 763, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.powerAC",\
 "AC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product2.y", 1, 5,\
 813, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.powerDC",\
 "DC Power of the inverter [W]", "regenPMSM.eTraction.inverter.product1.y", 1, 5,\
 809, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "regenPMSM.eTraction.machine.angleSensor.phi_rel", 1,\
 5, 921, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.voltageAC_EA",\
 "AC voltage of the inverter used for energy analysis (EA) models [V]", \
"simplePower.constantVoltage.V", 1, 7, 7655, 4)
DeclareAlias2("regenPMSM.eTraction.machine.toBus_shaftSpeed.electricDriveBus.voltageDC",\
 "DC voltage of the inverter, if battery and inverter are ideally connected it is equal to the battery voltage [V]",\
 "simplePower.constantVoltage.V", 1, 7, 7655, 4)
EndNonAlias(5)
PreNonAliasNew(6)
