#ifndef UE4SS_SDK_ITM_SonyTeamLeader_HPP
#define UE4SS_SDK_ITM_SonyTeamLeader_HPP

class UITM_SonyTeamLeader_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon_Host;
    USizeBox* SizeBox_0;
    float Size;

    void SetSize(float Size);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SonyTeamLeader(int32 EntryPoint, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif
