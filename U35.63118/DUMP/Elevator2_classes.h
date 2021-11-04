// BlueprintGeneratedClass Elevator2.Elevator2_C
// Size: 0x288 (Inherited: 0x220)
struct AElevator2_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	UMotionAudioController* MotionAudioController; // 0x238(0x08)
	UAudioComponent* Engine_noise_Cue; // 0x240(0x08)
	UBoxComponent* Collider_Floor; // 0x248(0x08)
	UStaticMeshComponent* Mesh_Elevator; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	FVector ElevatorScale; // 0x260(0x0c)
	float ElevatorHeight; // 0x26c(0x04)
	float LiftTime; // 0x270(0x04)
	float WaitTime; // 0x274(0x04)
	float Timer; // 0x278(0x04)
	bool GoingUp; // 0x27c(0x01)
	float DeltaTime; // 0x280(0x04)
	float ElevatorSpeed; // 0x284(0x04)

	void OnRep_GoingUp();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Elevator2(int32_t EntryPoint);
};

