import projects
def creat_project():
        title = projects.projctTitle()
        details = projects.projDetal()
        data_format=projects.validate_date_format()
        prepared_data = f"{title}:{details}:{data_format}"
        print(prepared_data)


creat_project()

