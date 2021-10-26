// BlueprintGeneratedClass BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_CompleteMissionScreen_DorettaHead_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UNiagaraComponent* NiagaraNoBlinking; // 0x228(0x08)
	UNiagaraComponent* Niagara; // 0x230(0x08)
	UStaticMeshComponent* SM_Doretta_Broken; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay();
	void StartPlay(enum class ECharselectionCameraLocation selectionLocation);
	void ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32_t EntryPoint);
};

