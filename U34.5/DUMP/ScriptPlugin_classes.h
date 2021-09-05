// Class ScriptPlugin.ScriptBlueprint
// Size: 0xc0 (Inherited: 0xa0)
struct UScriptBlueprint : UBlueprint {
	TArray<char> ByteCode; // 0xa0(0x10)
	FString SourceCode; // 0xb0(0x10)
};

// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// Size: 0x368 (Inherited: 0x328)
struct UScriptBlueprintGeneratedClass : UBlueprintGeneratedClass {
	TArray<char> ByteCode; // 0x328(0x10)
	FString SourceCode; // 0x338(0x10)
	TArray<UProperty*> ScriptProperties; // 0x348(0x10)
};

// Class ScriptPlugin.ScriptContext
// Size: 0x30 (Inherited: 0x28)
struct UScriptContext : UObject {

	void CallScriptFunction(FString FunctionName);
};

// Class ScriptPlugin.ScriptContextComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UScriptContextComponent : UActorComponent {

	void CallScriptFunction(FString FunctionName);
};

// Class ScriptPlugin.ScriptPluginComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UScriptPluginComponent : UActorComponent {

	bool CallScriptFunction(FString FunctionName);
};

// Class ScriptPlugin.ScriptTestActor
// Size: 0x238 (Inherited: 0x220)
struct AScriptTestActor : AActor {
	FString TestString; // 0x220(0x10)
	float TestValue; // 0x230(0x04)
	bool TestBool; // 0x234(0x01)

	float TestFunction(float InValue, float InFactor, bool bMultiply);
};

