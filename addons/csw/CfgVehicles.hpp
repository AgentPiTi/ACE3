class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class GVAR(deploy) {
				displayName = CSTRING(PlaceTripod_displayName);
				condition = QUOTE(_this call FUNC(canDeployTripod));
                statement = QUOTE([ARR_2({_this call FUNC(deployTripod)},_this)] call CBA_fnc_execNextFrame);
				exceptions[] = {};
			};
		};
	};

	class ThingX;
	class GVAR(tripodObject): ThingX {
		class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(Tripod_displayName);
				selection = "";
				distance = 3;
				condition = "true";
				
				class ACE_PickUp {
					displayName = CSTRING(Pickup_displayName);
					selection = "";
					distance = 3;
					condition = QUOTE([ARR_2(_target,_this)] call FUNC(canPickupTripod));
					statement = QUOTE([ARR_2(_target,_this)] call FUNC(pickupTripod));
				};
				
				class ACE_Position {
					displayName = CSTRING(Move_displayName);
					distance = 3;
					condition = QUOTE(_this call FUNC(canMoveTripod));
					//wait a frame to handle "Do When releasing action menu key" option:
                    statement = QUOTE([ARR_2({_this call FUNC(positionTripod)},[ARR_2(_this,_target)])] call CBA_fnc_execNextFrame);
				};
				
				class GVAR(cswMenu) {
					displayName = CSTRING(MountWeapon_displayName);
					distance = 3;
					condition = QUOTE(_this call FUNC(canDeployWeapon));
					statement = QUOTE([ARR_2({_this call FUNC(deployWeapon)},_this)] call CBA_fnc_execNextFrame);
				};
			};
		};
		
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 3;
		model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(CSWTripod_displayName);
		//vehicleClass = "ACE_CSW";
		typicalCargo[] = {};
		armor = 500000;
		mapSize = 0.4;
		nameSound = "Bunker";
		accuracy = 1000;
		destrType = "DestructDefault";
	};
	
	// Custom config entries
	// Static Weapons
	class StaticMGWeapon;
	class AT_01_base_F: StaticMGWeapon {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticATWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};

	class AA_01_base_F: StaticMGWeapon {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticAAWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};

	class HMG_01_base_F: StaticMGWeapon {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticHMGWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};

	class HMG_01_A_base_F: HMG_01_base_F {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticHMGWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};
	
	class HMG_01_high_base_F: HMG_01_base_F {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticHMGWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};

	class GMG_01_base_F: StaticMGWeapon {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticGMGWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};
	
	class GMG_01_high_base_F: GMG_01_base_F {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticGMGWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};
	
	class GMG_01_A_base_F: GMG_01_base_F {
		class Turrets {
			class MainTurret;
		};
		class ACE_SelfActions;
        class ACE_Actions {
			class ACE_MainActions {
				displayName = CSTRING(StaticGMGWeapon_displayName);
				distance = 3;
				
				class GVAR(cswOptions) {
					displayName = CSTRING(displayName);
					selection = "";
					distance = 3;
					condition = "true";
					
					class GVAR(disassemble) {
						displayName = CSTRING(DisassembleCSW_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canDismountWeapon));
						statement = QUOTE([ARR_2({_this call FUNC(dismountWeapon)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(loadAmmo) {
						displayName = CSTRING(LoadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canLoadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(loadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
					class GVAR(unloadAmmo) {
						displayName = CSTRING(UnloadAmmo_displayName);
						selection = "";
						distance = 3;
						condition = QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadAmmo));
						statement = QUOTE([ARR_2({_this call FUNC(unloadAmmo)},[ARR_2(_target,_this)])] call CBA_fnc_execNextFrame);
					};
				};
			};
		};
	};
	
	// Define all of the default static weapons so no compatability is lost
	class B_static_AT_F: AT_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticATBackpack); };
		scope = 1;
	}
	class I_static_AT_F: AT_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticATBackpack); };
		scope = 1;
	}
	class O_static_AT_F: AT_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticATBackpack); };
		scope = 1;
	}
	
	class B_static_AA_F: AA_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAABackpack); };
		scope = 1;
	}
	class I_static_AA_F: AA_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAABackpack); };
		scope = 1;
	}
	class O_static_AA_F: AA_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAABackpack); };
		scope = 1;
	}
	
	class B_HMG_01_F: HMG_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticHMGBackpack); };
		scope = 1;
	}
	class I_HMG_01_F: HMG_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticHMGBackpack); };
		scope = 1;
	}
	class O_HMG_01_F: HMG_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticHMGBackpack); };
		scope = 1;
	}
	
	class B_HMG_01_high_F: HMG_01_high_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticHMGTallBackpack); };
		scope = 1;
	}
	class I_HMG_01_high_F: HMG_01_high_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticHMGTallBackpack); };
		scope = 1;
	}
	class O_HMG_01_high_F: HMG_01_high_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticHMGTallBackpack); };
		scope = 1;
	}
	
	class B_HMG_01_A_F: HMG_01_A_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAutoHMGBackpack); };
		scope = 1;
	}
	class I_HMG_01_A_F: HMG_01_A_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo =  QGVAR(staticAutoHMGBackpack); };
		scope = 1;
	}
	class O_HMG_01_A_F: HMG_01_A_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo =  QGVAR(staticAutoHMGBackpack); };
		scope = 1;
	}
	
	class B_GMG_01_F: GMG_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticGMGBackpack); };
		scope = 1;
	}
	class I_GMG_01_F: GMG_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticGMGBackpack); };
		scope = 1;
	}
	class O_GMG_01_F: GMG_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticGMGBackpack); };
		scope = 1;
	}
	
	class B_GMG_01_high_F: GMG_01_high_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticGMGTallBackpack); };
		scope = 1;
	}
	class I_GMG_01_high_F: GMG_01_high_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticGMGTallBackpack); };
		scope = 1;
	}
	class O_GMG_01_high_F: GMG_01_high_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticGMGTallBackpack); };
		scope = 1;
	}
	
	class B_GMG_01_A_F: GMG_01_A_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAutoGMGBackpack); };
		scope = 1;
	}
	class I_GMG_01_A_F: GMG_01_A_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAutoGMGBackpack); };
		scope = 1;
	}
	class O_GMG_01_A_F: GMG_01_A_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
		class GVAR(cswOptions) { ace_csw_disassembleTo = QGVAR(staticAutoGMGBackpack); };
		scope = 1;
	}
	
	// Exploiting the fact that all vanilla static weapons are the same model
	class GVAR(staticATWeapon): B_static_AT_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticATBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(missiles_titan_static_AT); };
				magazines[] = { QGVAR(TitanAT_Dummy_Missile) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticATWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticATWeapon): GVAR(staticATWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticATWeapon): GVAR(staticATWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticATWeapon): GVAR(staticATWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticAAWeapon): B_static_AA_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticAABackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(missiles_titan_static_AA); };
				magazines[] = { QGVAR(TitanAA_Dummy_Missile) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticAAWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticAAWeapon): GVAR(staticAAWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticAAWeapon): GVAR(staticAAWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticAAWeapon): GVAR(staticAAWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticHMGWeapon): B_HMG_01_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticHMGBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(HMG_Static); };
				magazines[] = { QGVAR(HMG_Dummy_200Rnd_mag) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticHMGWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticHMGWeapon): GVAR(staticHMGWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticHMGWeapon): GVAR(staticHMGWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticHMGWeapon): GVAR(staticHMGWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticAutoHMGWeapon): B_HMG_01_A_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticAutoHMGBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(HMG_Static); };
				magazines[] = { QGVAR(HMG_Dummy_200Rnd_mag) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticAutoHMGWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticAutoHMGWeapon): GVAR(staticAutoHMGWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticAutoHMGWeapon): GVAR(staticAutoHMGWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticAutoHMGWeapon): GVAR(staticAutoHMGWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticHMGTallWeapon): B_HMG_01_high_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticHMGTallBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(HMG_Static); };
				magazines[] = { QGVAR(HMG_Dummy_200Rnd_mag) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticHMGTallWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticHMGTallWeapon): GVAR(staticHMGTallWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticHMGTallWeapon): GVAR(staticHMGTallWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticHMGTallWeapon): GVAR(staticHMGTallWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticGMGWeapon): B_GMG_01_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticGMGBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(GMG_20mm); };
				magazines[] = { QGVAR(GMG_Dummy_120Rnd_mag) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticGMGWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticGMGWeapon): GVAR(staticGMGWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticGMGWeapon): GVAR(staticGMGWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticGMGWeapon): GVAR(staticGMGWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticAutoGMGWeapon): B_GMG_01_A_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticAutoGMGBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(GMG_20mm); };
				magazines[] = { QGVAR(GMG_Dummy_120Rnd_mag) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 1;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticAutoGMGWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticAutoGMGWeapon): GVAR(staticAutoGMGWeapon) { side = 1; scope = 2; };
	class GVAR(I_staticAutoGMGWeapon): GVAR(staticAutoGMGWeapon) { side = 2; scope = 2; };
	class GVAR(O_staticAutoGMGWeapon): GVAR(staticAutoGMGWeapon) { side = 0; scope = 2; };
	
	class GVAR(staticGMGTallWeapon): B_GMG_01_high_F {
		class GVAR(cswOptions) {
			ace_csw_disassembleTo = QGVAR(staticGMGTallBackpack);
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = { QGVAR(GMG_20mm); };
				magazines[] = { QGVAR(GMG_Dummy_120Rnd_mag) };
			};
		};
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 3;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		displayName = CSTRING(StaticGMGTallWeapon_displayName);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(B_staticGMGTallWeapon): GVAR(staticGMGTallWeapon) { side = 1; };
	class GVAR(I_staticGMGTallWeapon): GVAR(staticGMGTallWeapon) { side = 2; };
	class GVAR(O_staticGMGTallWeapon): GVAR(staticGMGTallWeapon) { side = 0; };
	
	// Backpacks
	class Weapon_Bag_Base;
	class GVAR(staticATBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticATWeapon);
		};
		displayName = CSTRING(StaticATBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	
	class GVAR(staticAABackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticAAWeapon);
		};
		displayName = CSTRING(StaticAABag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	
	class GVAR(staticHMGBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticHMGWeapon);
		};
		displayName = CSTRING(StaticHMGBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(staticAutoHMGBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticAutoHMGWeapon);
		};
		displayName = CSTRING(StaticAutoHMGBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(staticHMGTallBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticHMGTallWeapon);
		};
		displayName = CSTRING(StaticHMGTallBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	
	class GVAR(staticGMGBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticGMGWeapon);
		};
		displayName = CSTRING(StaticGMGBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(staticAutoGMGBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticAutoGMGWeapon);
		};
		displayName = CSTRING(StaticAutoGMGBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	class GVAR(staticGMGTallBackpack): Weapon_Bag_Base {
		class GVAR(cswOptions) {
			ace_csw_assembleTo = QGVAR(staticGMGTallWeapon);
		};
		displayName = CSTRING(StaticGMGTallBag_displayName);
		author = ECSTRING(common, ACETeam);
		scope = 2;
		side = 1;
		//model = QPATHTOF(data\ACE_CSWTripod.p3d);
		////vehicleClass = "ACE_CSW";
	};
	
	// Default Backpacks (Disabling Scope)
	class B_AT_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticATWeapon); };
		scope = 1;
	};
	class I_AT_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticATWeapon); };
		scope = 1;
	};
	class O_AT_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticATWeapon); };
		scope = 1;
	};
	
	class B_AA_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAAWeapon); };
		scope = 1;
	};
	class I_AA_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAAWeapon); };
		scope = 1;
	};
	class O_AA_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAAWeapon); };
		scope = 1;
	};
	
	class B_HMG_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticHMGWeapon); };
		scope = 1;
	};
	class I_HMG_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticHMGWeapon); };
		scope = 1;
	};
	class O_HMG_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticHMGWeapon); };
		scope = 1;
	};
	
	class B_HMG_01_A_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAutoHMGWeapon); };
		scope = 1;
	};
	class I_HMG_01_A_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAutoHMGWeapon); };
		scope = 1;
	};
	class O_HMG_01_A_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAutoHMGWeapon); };
		scope = 1;
	};
	
	class B_HMG_01_high_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticHMGTallWeapon); };
		scope = 1;
	};
	class I_HMG_01_high_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticHMGTallWeapon); };
		scope = 1;
	};
	class O_HMG_01_high_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticHMGTallWeapon); };
		scope = 1;
	};
	
	class B_GMG_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticGMGWeapon); };
		scope = 1;
	};
	class I_GMG_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticGMGWeapon); };
		scope = 1;
	};
	class O_GMG_01_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticGMGWeapon); };
		scope = 1;
	};
	
	class B_GMG_01_A_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAutoGMGWeapon); };
		scope = 1;
	};
	class I_GMG_01_A_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAutoGMGWeapon); };
		scope = 1;
	};
	class O_GMG_01_A_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticAutoGMGWeapon); };
		scope = 1;
	};
	
	class B_GMG_01_high_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticGMGTallWeapon); };
		scope = 1;
	};
	class I_GMG_01_high_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticGMGTallWeapon); };
		scope = 1;
	};
	class O_GMG_01_high_weapon_F: Weapon_Bag_Base {
		class GVAR(cswOptions) { ace_csw_assembleTo = QGVAR(staticGMGTallWeapon); };
		scope = 1;
	};
};