// BlueprintGeneratedClass 025_SpectatorCam.025_SpectatorCam_C
// Size: 0x26c (Inherited: 0x220)
struct A025_SpectatorCam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UCameraComponent* Camera; // 0x228(0x08)
	struct USpringArmComponent* SpringArm; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Speed; // 0x240(0x04)
	float Target Distance; // 0x244(0x04)
	float New Distance; // 0x248(0x04)
	bool Allow Clipping; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	float Max Distance; // 0x250(0x04)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct TArray<char> Object Types; // 0x258(0x10)
	float Distance Cap; // 0x268(0x04)

	void Increment Camera Distance(float Delta Distance); // Function 025_SpectatorCam.025_SpectatorCam_C.Increment Camera Distance
	void ReceiveTick(float DeltaSeconds); // Function 025_SpectatorCam.025_SpectatorCam_C.ReceiveTick
	void ReceiveBeginPlay(); // Function 025_SpectatorCam.025_SpectatorCam_C.ReceiveBeginPlay
	void ExecuteUbergraph_025_SpectatorCam(int32_t EntryPoint); // Function 025_SpectatorCam.025_SpectatorCam_C.ExecuteUbergraph_025_SpectatorCam
};

