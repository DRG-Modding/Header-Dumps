// BlueprintGeneratedClass Elevator2.Elevator2_C
// Size: 0x288 (Inherited: 0x220)
struct AElevator2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct UMotionAudioController* MotionAudioController; // 0x238(0x08)
	struct UAudioComponent* Engine_noise_Cue; // 0x240(0x08)
	struct UBoxComponent* Collider_Floor; // 0x248(0x08)
	struct UStaticMeshComponent* Mesh_Elevator; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FVector ElevatorScale; // 0x260(0x0c)
	float ElevatorHeight; // 0x26c(0x04)
	float LiftTime; // 0x270(0x04)
	float WaitTime; // 0x274(0x04)
	float Timer; // 0x278(0x04)
	bool GoingUp; // 0x27c(0x01)
	char UnknownData_27D[0x3]; // 0x27d(0x03)
	float DeltaTime; // 0x280(0x04)
	float ElevatorSpeed; // 0x284(0x04)

	void OnRep_GoingUp(); // Function Elevator2.Elevator2_C.OnRep_GoingUp
	void UserConstructionScript(); // Function Elevator2.Elevator2_C.UserConstructionScript
	void ReceiveTick(float DeltaSeconds); // Function Elevator2.Elevator2_C.ReceiveTick
	void ExecuteUbergraph_Elevator2(int32_t EntryPoint); // Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2
};

