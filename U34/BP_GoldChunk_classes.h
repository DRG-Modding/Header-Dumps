// BlueprintGeneratedClass BP_GoldChunk.BP_GoldChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_GoldChunk_C : AResourceChunk {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* Mesh; // 0x290(0x08)
	struct USphereComponent* Sphere; // 0x298(0x08)
	struct UPointLightComponent* PointLight; // 0x2a0(0x08)

	void ReceiveBeginPlay(); // Function BP_GoldChunk.BP_GoldChunk_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_GoldChunk(int32_t EntryPoint); // Function BP_GoldChunk.BP_GoldChunk_C.ExecuteUbergraph_BP_GoldChunk
};

