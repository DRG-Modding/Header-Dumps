// BlueprintGeneratedClass BP_CaretakerShredderAction.BP_CaretakerShredderAction_C
// Size: 0xf0 (Inherited: 0xe0)
struct UBP_CaretakerShredderAction_C : UBP_CaretakerActionBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	FTimerHandle SpawnTimer; // 0xe8(0x08)

	void OnStopped();
	void OnTriggered();
	void OnStarted();
	void SpawnMore();
	void ActivateLights();
	void LaunchWave(int32_t WaveSize);
	void DeactivateLights();
	void ExecuteUbergraph_BP_CaretakerShredderAction(int32_t EntryPoint);
};

