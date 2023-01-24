#ifndef UE4SS_SDK_DSTelemetry_HPP
#define UE4SS_SDK_DSTelemetry_HPP

class UDJSONArray : public UObject
{

    class UDJSONArray* CreateJSONArray(class UObject* WorldContextObject);
    bool Clear();
    FString AsString();
    bool AddStringItem(FString Item);
    bool AddStringArrayItem(const TArray<FString>& Item);
    bool AddJSONObjectItem(const class UDJSONObject* Item);
    bool AddJSONObjectArrayItem(const TArray<class UDJSONObject*>& Item);
    bool AddJSONArrayItem(const class UDJSONArray* Item);
    bool AddJSONArrayArrayItem(const TArray<class UDJSONArray*>& Item);
    bool AddIntegerItem(const int32 Item);
    bool AddIntegerArrayItem(const TArray<int32>& Item);
    bool AddFloatItem(const float Item);
    bool AddFloatArrayItem(const TArray<float>& Item);
    bool AddEmptyItem();
    bool AddBooleanItem(const bool Item);
    bool AddBooleanArrayItem(const TArray<bool>& Item);
};

class UDJSONObject : public UObject
{

    class UDJSONObject* CreateJSONObject(class UObject* WorldContextObject);
    bool Clear();
    FString AsString();
    bool AddStringField(FString Key, FString Value);
    bool AddStringArrayField(FString Key, const TArray<FString>& Value);
    bool AddJSONObjectField(FString Key, const class UDJSONObject* Value);
    bool AddJSONObjectArrayField(FString Key, const TArray<class UDJSONObject*>& Value);
    bool AddJSONArrayField(FString Key, const class UDJSONArray* Value);
    bool AddJSONArrayArrayField(FString Key, const TArray<class UDJSONArray*>& Value);
    bool AddIntegerField(FString Key, const int32 Value);
    bool AddIntegerArrayField(FString Key, const TArray<int32>& Value);
    bool AddFloatField(FString Key, const float Value);
    bool AddFloatArrayField(FString Key, const TArray<float>& Value);
    bool AddEmptyField(FString Key);
    bool AddBooleanField(FString Key, const bool Value);
    bool AddBooleanArrayField(FString Key, const TArray<bool>& Value);
};

class UDSTelemetry : public UObject
{

    void Terminate();
    bool SubmitString(FString EventKey, FString EventData);
    bool SubmitSerialized(FString EventKey, FString EventData);
    bool SubmitJSONObject(FString EventKey, const class UDJSONObject* EventData);
    bool SubmitJSONArray(FString EventKey, const class UDJSONArray* EventData);
    bool SubmitInteger(FString EventKey, const int32 EventData);
    bool SubmitFloat(FString EventKey, const float EventData);
    bool SubmitEmpty(FString EventKey);
    bool SubmitBoolean(FString EventKey, const bool EventData);
    bool Start(const FString GameId, const FString BuildID);
    bool SetStateString(FString StateKey, FString StateData);
    bool SetStateSerialized(FString StateKey, FString StateData);
    bool SetStateJSONObject(FString StateKey, const class UDJSONObject* StateData);
    bool SetStateJSONArray(FString StateKey, const class UDJSONArray* StateData);
    bool SetStateInteger(FString StateKey, const int32 StateData);
    bool SetStateFloat(FString StateKey, const float StateData);
    bool SetStateEmpty(FString StateKey);
    bool SetStateBoolean(FString StateKey, const bool StateData);
    bool SetOnlinePlatformUserID(FString OnlinePlatformUserID);
    bool SetOnlinePlatformIdentifier(FString OnlinePlatformIdentifier);
    void Resume();
    void Pause();
    bool IsTerminated();
    bool IsPaused();
    int64 GetTelemetryInstanceID();
    class UDSTelemetry* CreateTelemetry(class UObject* WorldContextObject);
};

#endif
