// BlueprintGeneratedClass DE_GenericBuffEffect.DE_GenericBuffEffect_C
// Size: 0xc8 (Inherited: 0xc0)
struct UDE_GenericBuffEffect_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)

	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_GenericBuffEffect(int32_t EntryPoint);
};

