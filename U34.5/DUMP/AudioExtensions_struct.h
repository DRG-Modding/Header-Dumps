// ScriptStruct AudioExtensions.SoundModulationParameter
// Size: 0x14 (Inherited: 0x00)
struct FSoundModulationParameter {
	FName Control; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct AudioExtensions.SoundModulation
// Size: 0x10 (Inherited: 0x00)
struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x00(0x10)
};

