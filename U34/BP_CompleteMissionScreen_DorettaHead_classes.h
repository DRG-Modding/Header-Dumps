// BlueprintGeneratedClass BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_CompleteMissionScreen_DorettaHead_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* NiagaraNoBlinking; // 0x228(0x08)
	struct UNiagaraComponent* Niagara; // 0x230(0x08)
	struct UStaticMeshComponent* SM_Doretta_Broken; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ReceiveBeginPlay
	void StartPlay(enum class ECharselectionCameraLocation selectionLocation); // Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.StartPlay
	void ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32_t EntryPoint); // Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead
};

