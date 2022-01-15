#ifndef UE4SS_SDK_BP_TutorialHeadline_HPP
#define UE4SS_SDK_BP_TutorialHeadline_HPP

class ABP_TutorialHeadline_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_TutorialHeadline(int32 EntryPoint, AActor* K2Node_Event_OtherActor, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UOVERLAY_TutorialHeadline_C* CallFunc_Create_ReturnValue);
}

#endif
