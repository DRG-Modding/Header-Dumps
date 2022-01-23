#ifndef UE4SS_SDK_BP_TradingConsole_HPP
#define UE4SS_SDK_BP_TradingConsole_HPP

class ABP_TradingConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box1;
    class UWidgetComponent* Widget_Second;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget_Main;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer, bool FoundController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_PlayerController_SpaceRig_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_TradingConsole(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UDealWidget* K2Node_DynamicCast_AsDeal_Widget, bool K2Node_DynamicCast_bSuccess, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsNewPlayer_IsNewPlayer);
};

#endif
