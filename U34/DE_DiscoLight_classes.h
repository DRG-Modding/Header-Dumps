// BlueprintGeneratedClass DE_DiscoLight.DE_DiscoLight_C
// Size: 0xf9 (Inherited: 0xc0)
struct UDE_DiscoLight_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APlayerCharacter* Character; // 0xc8(0x08)
	struct APointLight* Light; // 0xd0(0x08)
	struct UCurveLinearColor* LightColorCurve; // 0xd8(0x08)
	float TimeSinceStart; // 0xe0(0x04)
	float curvelength; // 0xe4(0x04)
	struct UAudioComponent* MusicPlayer; // 0xe8(0x08)
	struct UParticleSystemComponent* StarburstParticles; // 0xf0(0x08)
	bool EnabledEffect; // 0xf8(0x01)

	void OnRep_Light(); // Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light
	void OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(struct UObject* Loaded); // Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC
	void ReceiveBeginPlay(); // Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect
	void OnStopEffect(); // Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect
	void Set Light(); // Function DE_DiscoLight.DE_DiscoLight_C.Set Light
	void ExecuteUbergraph_DE_DiscoLight(int32_t EntryPoint); // Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight
};

