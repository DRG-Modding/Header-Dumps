#ifndef UE4SS_SDK_BP_AudioVolume_DiscoverCave_HPP
#define UE4SS_SDK_BP_AudioVolume_DiscoverCave_HPP

class ABP_AudioVolume_DiscoverCave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float Volume;
    float FadeTime;
    TArray<class APlayerCharacter*> Players;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_AudioVolume_DiscoverCave(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

#endif
