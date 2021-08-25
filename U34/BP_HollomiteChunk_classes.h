// BlueprintGeneratedClass BP_HollomiteChunk.BP_HollomiteChunk_C
// Size: 0x2a8 (Inherited: 0x288)
struct ABP_HollomiteChunk_C : AResourceChunk {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USphereComponent* Sphere; // 0x290(0x08)
	struct UPointLightComponent* PointLight; // 0x298(0x08)
	struct UStaticMeshComponent* Cube; // 0x2a0(0x08)

	void ReceiveBeginPlay(); // Function BP_HollomiteChunk.BP_HollomiteChunk_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_HollomiteChunk(int32_t EntryPoint); // Function BP_HollomiteChunk.BP_HollomiteChunk_C.ExecuteUbergraph_BP_HollomiteChunk
};

