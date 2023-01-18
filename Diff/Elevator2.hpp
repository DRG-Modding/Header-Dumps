#ifndef UE4SS_SDK_Elevator2_HPP
#define UE4SS_SDK_Elevator2_HPP

class AElevator2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class UMotionAudioController* MotionAudioController;
    class UAudioComponent* Engine_noise_Cue;
    class UBoxComponent* Collider_Floor;
    class UStaticMeshComponent* Mesh_Elevator;
    class USceneComponent* DefaultSceneRoot;
    FVector ElevatorScale;
    float ElevatorHeight;
    float LiftTime;
    float WaitTime;
    float Timer;
    bool GoingUp;
    float DeltaTime;
    float ElevatorSpeed;

    void OnRep_GoingUp();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Elevator2(int32 EntryPoint);
};

#endif
