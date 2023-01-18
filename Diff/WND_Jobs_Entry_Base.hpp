#ifndef UE4SS_SDK_WND_Jobs_Entry_Base_HPP
#define UE4SS_SDK_WND_Jobs_Entry_Base_HPP

class UWND_Jobs_Entry_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWND_Jobs_Entry_Base_CUnfolded Unfolded;
    void Unfolded(class UWND_Jobs_Entry_Base_C* Entry);
    FWND_Jobs_Entry_Base_CUpdated Updated;
    void Updated();

    void Fold();
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void Unfold();
    void ExecuteUbergraph_WND_Jobs_Entry_Base(int32 EntryPoint);
    void Updated__DelegateSignature();
    void Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C* Entry);
};

#endif
