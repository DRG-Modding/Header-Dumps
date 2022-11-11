#ifndef UE4SS_SDK_ITM_SonyTeamLeader_HPP
#define UE4SS_SDK_ITM_SonyTeamLeader_HPP

class UITM_SonyTeamLeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon_Host;
    class USizeBox* SizeBox_0;
    float Size;

    void SetSize(float Size);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SonyTeamLeader(int32 EntryPoint);
};

#endif
