#ifndef UE4SS_SDK_LOG_State_HPP
#define UE4SS_SDK_LOG_State_HPP

class ULOG_State_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FString> LogBuffer;
    FLOG_State_CMessage Message;
    void Message();
    FString Log;
    TArray<FString> DiskBuffer;
    FString Line;

    void FlushToDisk();
    void GetLog(FString& Log);
    void Clear();
    void LogString(FString Context, FString Message, bool Flush);
    void OnInitialized();
    void ExecuteUbergraph_LOG_State(int32 EntryPoint);
    void Message__DelegateSignature();
};

#endif
