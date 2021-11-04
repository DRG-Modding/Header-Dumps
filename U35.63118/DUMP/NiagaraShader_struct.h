// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x00(0x10)
	FString DIClassName; // 0x10(0x10)
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraDataInterfaceGeneratedFunction {
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x00(0x01)
	FString Message; // 0x08(0x10)
	FGuid NodeGuid; // 0x18(0x10)
	FGuid PinGuid; // 0x28(0x10)
	TArray<FGuid> StackGuids; // 0x38(0x10)
};

