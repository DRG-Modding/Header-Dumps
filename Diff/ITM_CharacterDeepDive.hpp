#ifndef UE4SS_SDK_ITM_CharacterDeepDive_HPP
#define UE4SS_SDK_ITM_CharacterDeepDive_HPP

class UITM_CharacterDeepDive_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ScalableLevelDisplay_C* DATA_Class;
    class UUI_ScalableLevelDisplay_C* DATA_Player;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UUI_Character_Supplies_C* UI_Character_Supplies;
    class UUI_ScalableMissionStats_C* UI_ScalableMissionStats;
    int32 PlayerArrayIndex;
    class AFSDPlayerState* PlayerState;

    void SetData(int32 InPlayerArrayIndex);
    void ExecuteUbergraph_ITM_CharacterDeepDive(int32 EntryPoint);
};

#endif
