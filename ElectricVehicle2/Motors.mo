within ElectricVehicle2;
package Motors
  partial model Partial_PMSM
    "Test example: PermanentMagnetSynchronousInductionMachine fed by current source"
    import Modelica.Constants.pi;
    constant Integer m=3 "Number of phases";
    parameter Modelica.SIunits.Current Idq[2]={-53.5, 84.6}
      "Desired d- and q-current";
    parameter Modelica.SIunits.AngularVelocity wNominal=2*pi*smpmData.fsNominal/smpmData.p
      "Nominal speed";
    parameter Modelica.SIunits.Torque TLoad=181.4 "Nominal load torque";
    parameter Modelica.SIunits.Inertia JLoad=0.29
      "Load's moment of inertia";
    Modelica.Electrical.Machines.BasicMachines.SynchronousInductionMachines.SM_PermanentMagnet
      smpm(
      p=smpmData.p,
      fsNominal=smpmData.fsNominal,
      TsOperational=293.15,
      Rs=smpmData.Rs,
      TsRef=smpmData.TsRef,
      alpha20s=smpmData.alpha20s,
      Lszero=smpmData.Lszero,
      Lssigma=smpmData.Lssigma,
      Jr=smpmData.Jr,
      useSupport=true,
      Js=smpmData.Js,
      frictionParameters=smpmData.frictionParameters,
      phiMechanical(fixed=true, start=0),
      statorCoreParameters=smpmData.statorCoreParameters,
      strayLoadParameters=smpmData.strayLoadParameters,
      TrOperational=293.15,
      VsOpenCircuit=smpmData.VsOpenCircuit,
      Lmd=smpmData.Lmd,
      Lmq=smpmData.Lmq,
      useDamperCage=smpmData.useDamperCage,
      Lrsigmad=smpmData.Lrsigmad,
      Lrsigmaq=smpmData.Lrsigmaq,
      Rrd=smpmData.Rrd,
      Rrq=smpmData.Rrq,
      TrRef=smpmData.TrRef,
      alpha20r=smpmData.alpha20r,
      permanentMagnetLossParameters=smpmData.permanentMagnetLossParameters)
      annotation (Placement(transformation(extent={{-20,-50},{0,-30}})));
    Modelica.Electrical.MultiPhase.Sources.SignalCurrent signalCurrent(
        final m=m) annotation (Placement(transformation(
          origin={-10,50},
          extent={{-10,10},{10,-10}},
          rotation=270)));
    Modelica.Electrical.MultiPhase.Basic.Star star(final m=m) annotation (
        Placement(transformation(extent={{-50,80},{-70,100}})));
    Modelica.Electrical.Analog.Basic.Ground ground annotation (Placement(
          transformation(
          origin={-90,90},
          extent={{-10,-10},{10,10}},
          rotation=270)));
    Modelica.Electrical.Machines.Utilities.CurrentController currentController(p=smpm.p)
      annotation (Placement(transformation(extent={{-50,40},{-30,60}})));
    Modelica.Blocks.Sources.Constant id(k=0)
      annotation (Placement(transformation(extent={{-96,56},{-76,76}})));
    Modelica.Electrical.Machines.Sensors.VoltageQuasiRMSSensor voltageQuasiRMSSensor
      annotation (Placement(transformation(
          extent={{-10,10},{10,-10}},
          rotation=180,
          origin={-48,-10})));
    Modelica.Electrical.MultiPhase.Basic.Star starM(final m=m) annotation (
        Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=180,
          origin={-74,-10})));
    Modelica.Electrical.Analog.Basic.Ground groundM annotation (Placement(
          transformation(
          origin={-94,-28},
          extent={{-10,-10},{10,10}},
          rotation=270)));
    Modelica.Electrical.Machines.Utilities.TerminalBox terminalBox(
        terminalConnection="Y")
      annotation (Placement(transformation(extent={{-20,-34},{0,-14}})));
    Modelica.Electrical.Machines.Sensors.RotorDisplacementAngle rotorDisplacementAngle(p=smpm.p,
        useSupport=false)
      annotation (Placement(transformation(
          origin={20,-40},
          extent={{-10,10},{10,-10}},
          rotation=270)));
    Modelica.Mechanics.Rotational.Sensors.AngleSensor angleSensor annotation (
       Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={10,8})));
    parameter
      Modelica.Electrical.Machines.Utilities.ParameterRecords.SM_PermanentMagnetData
      smpmData(useDamperCage=false)
      annotation (Placement(transformation(extent={{38,54},{58,74}})));
    Modelica.Electrical.Machines.Sensors.CurrentQuasiRMSSensor currentQuasiRMSSensor
      annotation (Placement(transformation(
          origin={-18,6},
          extent={{-10,-10},{10,10}},
          rotation=270)));
    Modelica.Mechanics.Rotational.Interfaces.Flange_b flange_b
      annotation (Placement(transformation(extent={{110,-10},{130,10}})));
    Modelica.Blocks.Interfaces.RealInput CurrentRequest
      annotation (Placement(transformation(extent={{-160,20},{-120,60}})));
    Modelica.Mechanics.Rotational.Sensors.TorqueSensor torqueSensor
      annotation (Placement(transformation(extent={{58,-50},{78,-30}})));
    Modelica.Mechanics.Rotational.Interfaces.Flange_b GND
      annotation (Placement(transformation(extent={{-10,-130},{10,-110}})));
    Modelica.Blocks.Nonlinear.Limiter limiter(uMax=100)
      annotation (Placement(transformation(extent={{-96,28},{-76,48}})));
    Modelica.Blocks.Interfaces.RealOutput elecPower annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=270,
          origin={-60,-130})));
    Modelica.Blocks.Math.Product product1 annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=270,
          origin={-60,-70})));
    Modelica.Blocks.Interfaces.RealOutput torque annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=270,
          origin={60,-130})));
  equation
    connect(star.pin_n, ground.p)
      annotation (Line(points={{-70,90},{-80,90}}, color={0,0,255}));
    connect(rotorDisplacementAngle.plug_n, smpm.plug_sn) annotation (Line(
          points={{26,-30},{26,-20},{-16,-20},{-16,-30}}, color={0,0,255}));
    connect(rotorDisplacementAngle.plug_p, smpm.plug_sp)
      annotation (Line(points={{14,-30},{-4,-30}}, color={0,0,255}));
    connect(terminalBox.plug_sn, smpm.plug_sn) annotation (Line(
        points={{-16,-30},{-16,-30}},
        color={0,0,255}));
    connect(terminalBox.plug_sp, smpm.plug_sp) annotation (Line(
        points={{-4,-30},{-4,-30}},
        color={0,0,255}));
    connect(smpm.flange, rotorDisplacementAngle.flange) annotation (Line(
        points={{0,-40},{10,-40}}));
    connect(signalCurrent.plug_p, star.plug_p) annotation (Line(
        points={{-10,60},{-10,90},{-50,90}},
        color={0,0,255}));
    connect(angleSensor.flange, rotorDisplacementAngle.flange) annotation (
        Line(
        points={{10,-2},{10,-40}}));
    connect(angleSensor.phi, currentController.phi) annotation (Line(
        points={{10,19},{10,30},{-40,30},{-40,38}},
        color={0,0,127}));
    connect(id.y, currentController.id_rms) annotation (Line(
        points={{-75,66},{-60,66},{-60,56},{-52,56}},
        color={0,0,127}));
    connect(groundM.p, terminalBox.starpoint) annotation (Line(
        points={{-84,-28},{-20,-28}},
        color={0,0,255}));
    connect(voltageQuasiRMSSensor.plug_p, terminalBox.plugSupply)
      annotation (Line(
        points={{-38,-10},{-10,-10},{-10,-28}},
        color={0,0,255}));
    connect(starM.plug_p, voltageQuasiRMSSensor.plug_n) annotation (Line(
        points={{-64,-10},{-58,-10}},
        color={0,0,255}));
    connect(starM.pin_n, groundM.p) annotation (Line(
        points={{-84,-10},{-84,-28}},
        color={0,0,255}));
    connect(currentController.y, signalCurrent.i) annotation (Line(
        points={{-29,50},{-22,50}}, color={0,0,127}));
    connect(currentQuasiRMSSensor.plug_n, voltageQuasiRMSSensor.plug_p)
      annotation (Line(
        points={{-18,-4},{-18,-10},{-38,-10}},
                                      color={0,0,255}));
    connect(signalCurrent.plug_n, currentQuasiRMSSensor.plug_p) annotation (
        Line(points={{-10,40},{-10,26},{-18,26},{-18,16}}, color={0,0,255}));
    connect(torqueSensor.flange_a, smpm.flange)
      annotation (Line(points={{58,-40},{0,-40}}, color={0,0,0}));
    connect(torqueSensor.flange_b, flange_b) annotation (Line(points={{78,-40},
            {96,-40},{96,0},{120,0}}, color={0,0,0}));
    connect(smpm.support, GND) annotation (Line(points={{0,-50},{0,-120}},
                              color={0,0,0}));
    connect(currentController.iq_rms, limiter.y) annotation (Line(points={{
            -52,44},{-64,44},{-64,38},{-75,38}}, color={0,0,127}));
    connect(CurrentRequest, limiter.u) annotation (Line(points={{-140,40},{
            -120,40},{-120,38},{-98,38}}, color={0,0,127}));
    connect(elecPower, product1.y)
      annotation (Line(points={{-60,-130},{-60,-81}}, color={0,0,127}));
    connect(product1.u1, voltageQuasiRMSSensor.V) annotation (Line(points={{
            -54,-58},{-54,-42},{-48,-42},{-48,-21}}, color={0,0,127}));
    connect(currentQuasiRMSSensor.I, product1.u2) annotation (Line(points={{
            -29,6},{-36,6},{-36,-50},{-66,-50},{-66,-58}}, color={0,0,127}));
    connect(torque, torqueSensor.tau)
      annotation (Line(points={{60,-130},{60,-51}}, color={0,0,127}));
    annotation (experiment(StopTime=2.0, Interval=1E-4, Tolerance=1e-06), Documentation(
          info="<html>
<p>A synchronous induction machine with permanent magnets accelerates a quadratic speed dependent load from standstill.
The rms values of d- and q-current in rotor fixed coordinate system are converted to three-phase currents,
and fed to the machine. The result shows that the torque is influenced by the q-current,
whereas the stator voltage is influenced by the d-current.</p>

<p>Default machine parameters are used.</p>
</html>"),
      Icon(graphics={
            Bitmap(
            extent={{-99,-103},{99,103}},
            imageSource=
                "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",
            fileName=
                "modelica://ElectricVehicle/../../../../../Downloads/pngguru.com.png",
            origin={-1,-1},
            rotation=180)}));
  end Partial_PMSM;

  model Default_PMSM
    extends Partial_PMSM(smpm(wMechanical(displayUnit="rad/s")),
      limiter(uMax=400),
      smpmData(Jr=0.01));

  end Default_PMSM;

  model onlyTorque
    Modelica.Mechanics.Rotational.Sources.Torque torque(useSupport=true)
      annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
    Modelica.Mechanics.Rotational.Interfaces.Support support
      annotation (Placement(transformation(extent={{-10,-130},{10,-110}})));
    Modelica.Mechanics.Rotational.Interfaces.Flange_b flange_b
      annotation (Placement(transformation(extent={{110,-10},{130,10}})));
    Modelica.Blocks.Interfaces.RealInput u
      annotation (Placement(transformation(extent={{-160,-60},{-120,-20}})));
    Modelica.Mechanics.Rotational.Components.Inertia rotor(J=0.3)
      annotation (Placement(transformation(extent={{40,-10},{60,10}})));
    Modelica.Mechanics.Rotational.Components.Inertia stator(J=0.3)
      annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={0,-50})));
    Favorites.Blocks.Nonlinear.Limiter maxTorque(uMax=maxAccel, uMin=-
          maxRegen) "Based on Tesla Model S (max regen chosen arbitrarily)"
      annotation (Placement(transformation(extent={{-58,-10},{-38,10}})));
    Modelica.Mechanics.Rotational.Sensors.SpeedSensor speedSensor annotation (
       Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={0,70})));
    Modelica.Blocks.Interfaces.RealOutput y annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={0,130})));
  equation
    connect(rotor.flange_b, flange_b)
      annotation (Line(points={{60,0},{120,0}}, color={0,0,0}));
    connect(torque.flange, rotor.flange_a)
      annotation (Line(points={{10,0},{40,0}}, color={0,0,0}));
    connect(stator.flange_b, torque.support)
      annotation (Line(points={{0,-40},{0,-10}}, color={0,0,0}));
    connect(stator.flange_a, support) annotation (Line(points={{-6.66134e-16,
            -60},{0,-60},{0,-120}}, color={0,0,0}));
    connect(torque.tau, maxTorque.y)
      annotation (Line(points={{-12,0},{-37,0}}, color={0,0,127}));
    connect(u, maxTorque.u) annotation (Line(points={{-140,-40},{-80,-40},{
            -80,0},{-60,0}}, color={0,0,127}));
    connect(speedSensor.flange, torque.support) annotation (Line(points={{
            -6.66134e-16,60},{0,60},{0,40},{20,40},{20,-30},{0,-30},{0,-10}},
          color={0,0,0}));
    connect(y, speedSensor.w)
      annotation (Line(points={{0,130},{0,81}}, color={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Bitmap(
            extent={{-100,-100},{100,100}},
            imageSource=
                "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IAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAPLmmsQAAA5xJREFUJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsCCoDup4AAJCABCUigRwIKgB6t7pglIAEJSKB7AgqA7qeAACQgAQlIoEcCCoAere6YJSABCUigewIKgO6ngAAkIAEJSKBHAgqAHq3umCUgAQlIoHsC/x/rFyl5O2l5pAAAAABJRU5ErkJggg==",
            fileName=
                "modelica://ElectricVehicle/../../../../../Desktop/free-curved-arrow-icon-2261-thumb.png")}),
        Diagram(coordinateSystem(preserveAspectRatio=false)));
  end onlyTorque;
  annotation (Icon(graphics={
          Bitmap(
          extent={{-99,-103},{99,103}},
          imageSource=
              "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",
          fileName=
              "modelica://ElectricVehicle/../../../../../Downloads/pngguru.com.png",
          origin={1,1},
          rotation=180)}));
end Motors;
