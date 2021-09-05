// BlueprintGeneratedClass BP_EnorChunk.BP_EnorChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_EnorChunk_C : AResourceChunk {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	USphereComponent* Sphere; // 0x290(0x08)
	UPointLightComponent* PointLight; // 0x298(0x08)
	UStaticMeshComponent* Cube; // 0x2a0(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_EnorChunk(int32_t EntryPoint);
};

