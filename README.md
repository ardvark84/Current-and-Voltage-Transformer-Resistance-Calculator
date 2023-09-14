# Current-and-Voltage-Transformer-Resistance-Calculator

Develop a C++ application for the electrical power system engineer/technician that calculates
the burden of the measuring (instrument) transformers and informs the engineer/technician
whether the burden value is acceptable or not, as follows:

• Design a menu that allows the user to choose for which type of measuring transformer
calculations are needed.

• After the selection of the type of measuring transformer, ask the user about the number of
measuring and protective devices that are to be connected to the secondary side of the
measuring transformer.

• Ask the user to enter the burden in Ω for each measuring and protective device that are to be
connected to the secondary side of the measuring transformer.

• Calculate the total burden knowing that the devices are connected in series in the secondary
winding of the current transformer and are connected in parallel in the secondary winding of
the voltage transformer.

• Compare the total burden of the measuring transformer with a predefined critical burden value
for each measuring transformer and inform the user that the burden is too large if it is more
than the critical burden for the current transformer or that the burden is too low if it is less than
the critical burden for the voltage transformer, otherwise tell him that the burden is within the
acceptable range.
