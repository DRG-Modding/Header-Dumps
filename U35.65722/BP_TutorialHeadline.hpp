#ifndef UE4SS_SDK_BP_TutorialHeadline_HPP
#define UE4SS_SDK_BP_TutorialHeadline_HPP

class ABP_TutorialHeadline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_TutorialHeadline(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOVERLAY_TutorialHeadline_C* CallFunc_Create_ReturnValue);
};

#endif
