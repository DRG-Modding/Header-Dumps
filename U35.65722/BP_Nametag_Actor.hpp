#ifndef UE4SS_SDK_BP_Nametag_Actor_HPP
#define UE4SS_SDK_BP_Nametag_Actor_HPP

class ABP_Nametag_Actor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Nametag_Actor(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UOnScreenIndicator_Actor_Nametag_C* K2Node_DynamicCast_AsOn_Screen_Indicator_Actor_Nametag, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
