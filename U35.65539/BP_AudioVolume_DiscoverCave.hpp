#ifndef UE4SS_SDK_BP_AudioVolume_DiscoverCave_HPP
#define UE4SS_SDK_BP_AudioVolume_DiscoverCave_HPP

class ABP_AudioVolume_DiscoverCave_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    float Volume;
    float FadeTime;
    TArray<APlayerCharacter*> Players;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_AudioVolume_DiscoverCave(int32 EntryPoint, AActor* K2Node_Event_OtherActor, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
}

#endif
