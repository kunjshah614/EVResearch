#include <moutil.c>
PreNonAliasDef(6)
PreNonAliasDef(7)
PreNonAliasDef(8)
PreNonAliasDef(9)
PreNonAliasDef(10)
StartNonAlias(5)
DeclareVariable("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.cosPhi.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.mechanicPower", \
"Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.cosPhi.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.cosPhi", \
"Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.electricPower", \
"Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.lineCurrents[1]", \
"Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.lineCurrents[2]", \
"Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.lineCurrents[3]", \
"Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.lineVoltages[1]", \
"Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.lineVoltages[2]", \
"Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.lineVoltages[3]", \
"Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.electricDriveBus.maxLineVoltage", \
"Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.mechanicPower", \
"Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.setVoltageUs[1]", \
"Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.setVoltageUs[2]", \
"Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.electricDriveBus.setVoltageUs[3]", \
"Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_electricPower.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_electricPower.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_innerTorque.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_innerTorque.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineCurrents.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareVariable("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_lineVoltages.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_mechanicPower.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_outerTorque.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_outerTorque.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftAngle.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_shaftSpeed.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machine.toBus_temperatures.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.electricPowerFromBus.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.machineEfficiencyComputation.mechanicPowerFromBus.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.cosPhi", \
"Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.electricPower", \
"Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.innerTorque", \
"Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.lineCurrents[1]", \
"Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.lineCurrents[2]", \
"Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.lineCurrents[3]", \
"Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.lineVoltages[1]", \
"Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.lineVoltages[2]", \
"Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.lineVoltages[3]", \
"Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.signals.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.signals.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.signals.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.signals.electricDriveBus.maxLineVoltage", \
"Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.mechanicPower", \
"Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.outerTorque", \
"Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.rotorAngle", \
"Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.rotorSpeed", \
"Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.setVoltageUs[1]", \
"Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.setVoltageUs[2]", \
"Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.signals.electricDriveBus.setVoltageUs[3]", \
"Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.cosPhi", \
"Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.signals.lineCurrents.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.signals.lineCurrents.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.cosPhi", \
"Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareVariable("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.signals.lineVoltages.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.signals.lineVoltages.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.cosPhi",\
 "Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.signals.setVoltageUdUq.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.toBus_maxLineVoltage.u", 1, 5, 772, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.signals.setVoltageUdUq.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.cosPhi", \
"Mechanic rotational speed of machine's shaft [1]", "torqueControlled.machine.quasiPowerSensor.cosphi", 1,\
 5, 490, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.electricPower",\
 "Output signal [W]", "torqueControlled.machine.quasiPowerSensor.P", 1, 5, 491, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.innerTorque",\
 "Electrical torque inside the machine [N.m]", "torqueControlled.machine.coreElement.innerTorque", 1,\
 5, 404, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.lineCurrents[1]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[1].i", 1,\
 5, 78, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.lineCurrents[2]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[2].i", 1,\
 5, 80, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.lineCurrents[3]",\
 "Vector with the currents in the three supply lines [A]", "torqueControlled.machine.plug_p.pin[3].i", 1,\
 5, 82, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.lineVoltages[1]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[1]", 1,\
 5, 464, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.lineVoltages[2]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[2]", 1,\
 5, 465, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.lineVoltages[3]",\
 "Vector with the voltages across the three supply lines [V]", "torqueControlled.machine.voltageSensor.v[3]", 1,\
 5, 466, 4)
DeclareVariable("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.permanentMagnet",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.rotorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareVariable("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.statorCore",\
 "[K|degC]", 293.15, 0.0,1E+100,300.0,0,521)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.statorWindings[1]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.statorWindings[2]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.statorWindings[3]",\
 "[K|degC]", "torqueControlled.machine.coreElement.thermalAmbient.constTs.k", 1,\
 5, 310, 4)
DeclareVariable("torqueControlled.toBus_maxLineVoltage.electricDriveBus.machineTemperatures.useDamperCage",\
 "Enable / disable damper cage [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.mechanicPower",\
 "Output signal [W]", "torqueControlled.machine.innerPower.y", 1, 5, 439, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.outerTorque",\
 "Outer mechnical torque at the shaft of the machine considering inner inertia [N.m]",\
 "torqueControlled.flange_b.tau", -1, 5, 877, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.rotorAngle",\
 "Mechanic angle of machine's shaft [rad|deg]", "torqueControlled.machine.angleSensor.phi_rel", 1,\
 5, 434, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.rotorSpeed",\
 "Mechanic rotational speed of machine's shaft [rad/s|1/min]", "partial_Chassis.inertia.w", 1,\
 5, 924, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.setVoltageUs[1]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[1].v", 1, 5, 77, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.setVoltageUs[2]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[2].v", 1, 5, 79, 4)
DeclareAlias2("torqueControlled.toBus_maxLineVoltage.electricDriveBus.setVoltageUs[3]",\
 "Output values for voltage driven inverters as phase voltages [V]", \
"torqueControlled.machine.plug_p.pin[3].v", 1, 5, 81, 4)
DeclareAlias2("torqueControlled.threePhaseIdealInverter.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.threePhaseIdealInverter.const.k", 1, 5, 530, 4)
DeclareAlias2("torqueControlled.threePhaseIdealInverter.electricDriveBus.switchingFrequency",\
 "Connector of Real output signal", "torqueControlled.threePhaseIdealInverter.switchingFrequency.k", 1,\
 7, 7687, 4)
DeclareAlias2("torqueControlled.threePhaseIdealInverter.toBus_SwitchingFrequency.electricDriveBus.maxLineVoltage",\
 "Maximum voltage that is possible at the machine's terminal [V]", \
"torqueControlled.threePhaseIdealInverter.const.k", 1, 5, 530, 4)
DeclareAlias2("torqueControlled.threePhaseIdealInverter.toBus_maxStatorVoltage.electricDriveBus.switchingFrequency",\
 "Connector of Real output signal", "torqueControlled.threePhaseIdealInverter.switchingFrequency.k", 1,\
 7, 7687, 4)
EndNonAlias(5)
PreNonAliasNew(6)
