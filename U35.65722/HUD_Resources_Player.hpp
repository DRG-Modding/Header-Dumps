#ifndef UE4SS_SDK_HUD_Resources_Player_HPP
#define UE4SS_SDK_HUD_Resources_Player_HPP

class UHUD_Resources_Player_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_OptionalHudElement_C* HUD_OptionalHudElement;
    class UHorizontalBox* ResourceParent;
    class URetainerBox* Retainer;
    class APlayerCharacter* Character;
    class UResourcesComponent* ResourceComponent;
    bool LaserpointerEquipped;
    class UHUDVisibilityGroup* VisibilityGroup;
    int32 PreviewCount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Add Resource(class UCappedResource* Resource);
    void OnResourceAdded(class UCappedResource* Resource);
    void OnResourceChanged(class UHUD_Resources_Player_Icon_C* ResourceIcon);
    void RefreshVisibility();
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void ExecuteUbergraph_HUD_Resources_Player(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FExecuteUbergraph_HUD_Resources_PlayerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUD_Resources_Player_Icon_C* CallFunc_Create_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UCappedResource* K2Node_CustomEvent_resource_1, class UCappedResource* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UHUD_Resources_Player_Icon_C* CallFunc_Create_ReturnValue_1, FExecuteUbergraph_HUD_Resources_PlayerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, FExecuteUbergraph_HUD_Resources_PlayerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UCappedResource* K2Node_CustomEvent_resource, class UHUD_Resources_Player_Icon_C* K2Node_CustomEvent_ResourceIcon, bool CallFunc_Not_PreBool_ReturnValue, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FExecuteUbergraph_HUD_Resources_PlayerK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
