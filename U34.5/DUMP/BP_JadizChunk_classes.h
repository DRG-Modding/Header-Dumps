// BlueprintGeneratedClass BP_JadizChunk.BP_JadizChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_JadizChunk_C : AResourceChunk {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	USphereComponent* Sphere; // 0x290(0x08)
	UPointLightComponent* PointLight; // 0x298(0x08)
	UStaticMeshComponent* Cube; // 0x2a0(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_JadizChunk(int32_t EntryPoint);
};

