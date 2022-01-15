#ifndef UE4SS_SDK_BP_Nametag_Actor_HPP
#define UE4SS_SDK_BP_Nametag_Actor_HPP

class ABP_Nametag_Actor_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Nametag_Actor(int32 EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UOnScreenIndicator_Actor_Nametag_C* K2Node_DynamicCast_AsOn_Screen_Indicator_Actor_Nametag, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
